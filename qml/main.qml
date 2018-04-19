import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("AI Sniper")

  // TODO Добавь два текстовых поля для угла и модуля скорости
    Column {
        anchors.centerIn: parent
        spacing: 10

        Item {
            width: angleInput.width
            height: angleInput.height

            Text {
                text: "Angle: "
                anchors {
                    right: angleInput.left
                    verticalCenter: angleInput.verticalCenter
                }
            }

            TextField {
                id: angleInput

                width: 170
                height: 43
                text: "10"

                validator: DoubleValidator{}
                horizontalAlignment: Text.AlignHCenter
            }
        }

        Item{
            width: speedInput.width
            height: speedInput.height

            Text {
                text: "Speed: "
                anchors {
                    right: speedInput.left
                    verticalCenter: speedInput.verticalCenter
                }
            }

            TextField {
                id: speedInput

                width: 170
                height: 45
                text: "5"
                horizontalAlignment: Text.AlignHCenter
            }
        } //Item

        Button {
            text: "Fire!!!"
            anchors.horizontalCenter: parent.horizontalCenter

            onClicked: {
                if (angleInput.acceptableInput) {
                    PhysicsEngine.fire(speedInput.text, angleInput.text);
                } else {
                    angleInput.text = "Введите сюда нормальное число!";
                }
            }
        }

        Item{
            width: resultOutput.width
            height: resultOutput.height

            Text {
                text: "Distance from target: "
                anchors {
                    right: resultOutput.left
                    verticalCenter: resultOutput.verticalCenter
                }
            }

            TextField {
                id: resultOutput

                width: 170
                height: 45
                text: PhysicsEngine.distance
                horizontalAlignment: Text.AlignHCenter
            }
        } //Item

    } // Column
}
