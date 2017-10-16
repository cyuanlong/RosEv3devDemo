#!/usr/bin/env python
import rospy
from std_msgs.msg import String
from ev3dev.ev3 import *
mB = LargeMotor('outB')
mC = LargeMotor('outC')
mB = LargeMotor('outB')
mC = LargeMotor('outC')
us = UltrasonicSensor()
us.mode='US-DIST-CM'
units = us.units

ir = InfraredSensor()
ir.mode = 'IR-PROX'


def callback(data):
    rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)
    # print(datetime.datetime.now())
    control_forward(data.data)
    # subprocess.call(["python3", "move.py", data.data])
    
def listener():

    # In ROS, nodes are uniquely named. If two nodes with the same
    # node are launched, the previous one is kicked off. The
    # anonymous=True flag means that rospy will choose a unique
    # name for our 'listener' node so that multiple listeners can
    # run simultaneously.
    rospy.init_node('listener', anonymous=True)

    rospy.Subscriber("chatter", String, callback, queue_size=1)
    respect()
    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()

def respect():
    while not ts.value():    # Stop program by pressing touch sensor button
    # Infrared sensor in proximity mode will measure distance to the closest
    # object in front of it.
        distance = ir.value()
        if distance < 60:
            Leds.set_color(Leds.LEFT, Leds.RED)
        else:
            Leds.set_color(Leds.LEFT, Leds.GREEN)

def control_forward(move_command):
    # mB = LargeMotor('outB')
    # mC = LargeMotor('outC')
    # us = UltrasonicSensor()
    # assert us.connected, "Connect a single US sensor to any sensor port"
    # ts = TouchSensor()
    # assert ts.connected, "Connect a touch sensor to any port"

    # Put the US sensor into distance mode.
    # us.mode='US-DIST-CM'

    # units = us.units
    # reports 'cm' even though the sensor measures 'mm'
    if move_command is 'w':  
        mB.run_forever(speed_sp=100)
        # mB.run_forever(time_sp=1000, speed_sp=100)
        mC.run_forever(speed_sp=100)
        # mC.run_forever(time_sp=1000, speed_sp=100)
    elif move_command is 'a':
        mB.run_timed(position_sp=45, speed_sp=-100, stop_action="hold")
    elif move_command is 's':
        mB.run_forever(speed_sp=-100)
        mC.run_forever(speed_sp=-100)
    elif move_command is 'd':
        mC.run_timed(position_sp=45, speed_sp=-100, stop_action="hold")
    elif move_command is 'x':
        mB.stop()
        mC.stop()
    # Leds.set_color(Leds.LEFT, Leds.GREEN)  #set left led green before exiting

if __name__ == '__main__':
    listener()

