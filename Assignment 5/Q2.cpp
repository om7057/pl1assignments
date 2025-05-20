#include <iostream>


namespace RoboCompany {

    
    namespace GroundRobots {
        
        
        namespace Types {
            class WheeledRobot {
            public:
                void drive() {
                    std::cout << "Wheeled robot is driving." << std::endl;
                }
            };

            class LeggedRobot {
            public:
                void walk() {
                    std::cout << "Legged robot is walking." << std::endl;
                }
            };
        }

        
        namespace Components {
            class Camera {
            public:
                void captureImage() {
                    std::cout << "Camera is capturing an image." << std::endl;
                }
            };

            class Arm {
            public:
                void pickObject() {
                    std::cout << "Arm is picking up an object." << std::endl;
                }
            };
        }
    }

    
    namespace Drones {

        
        namespace Types {
            class Quadcopter {
            public:
                void fly() {
                    std::cout << "Quadcopter is flying." << std::endl;
                }
            };

            class Hexacopter {
            public:
                void hover() {
                    std::cout << "Hexacopter is hovering." << std::endl;
                }
            };
        }

        
        namespace Components {
            class GPS {
            public:
                void navigate() {
                    std::cout << "GPS is helping with navigation." << std::endl;
                }
            };

            class Camera {
            public:
                void recordVideo() {
                    std::cout << "Camera is recording video." << std::endl;
                }
            };
        }
    }
}

int main() {
    
    RoboCompany::GroundRobots::Types::WheeledRobot wheeledRobot;
    wheeledRobot.drive();

    RoboCompany::GroundRobots::Types::LeggedRobot leggedRobot;
    leggedRobot.walk();

    RoboCompany::GroundRobots::Components::Camera camera;
    camera.captureImage();

    RoboCompany::GroundRobots::Components::Arm arm;
    arm.pickObject();

    RoboCompany::Drones::Types::Quadcopter quadcopter;
    quadcopter.fly();

    RoboCompany::Drones::Types::Hexacopter hexacopter;
    hexacopter.hover();

    RoboCompany::Drones::Components::GPS gps;
    gps.navigate();

    RoboCompany::Drones::Components::Camera cam;
    cam.recordVideo();

    return 0;
}
