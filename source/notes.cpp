//                                  FROM QML

//    TextField { // TODO Добавь Текст для вывода значения результата (расстояние до)
//        id: resultOutput

//        width: 170
//        height: 45
//        text: "100"
//        horizontalAlignment: Text.AlignHCenter
//    }

//    Item {
//        width: result.width
//        height: result.height

//        Text {
//            text: "result: "
//            anchors {
//                right: result.left
//                verticalCenter: result.verticalCenter
//            }
//        }

//        TextField {
//            id: result

//            width: 170
//            height: 43
//            text: "800"
//            validator: DoubleValidator{}
//            horizontalAlignment: Text.AlignHCenter
//        }
//    }



//    ListView {
//        id: listView
//        anchors.fill: parent
//        spacing: 10

//        model: ListModel {
//            ListElement {
//                name: "Абра"
//                color: "yellow"
//            }
//            ListElement {
//                name: "Кадабра"
//                color: "brown"
//            }
//        }

//        delegate: Rectangle {
//            width: listView.width
//            height: 50
//            color: model.color

//            Text {
//                text: model.name
//                anchors.centerIn: parent
//            }
//        }
//    }

//    onClicked: {
//        var a = {
//            value: 200,
//            name: "haha"
//        }

//        if (a.value == 200) {
//            console.log("a равно " + a.name);
//        } else {
//            console.log("не равно");
//        }

//        if (angleInput.acceptableInput) {
//            PhysicsEngine.fire(speedInput.text, angleInput.text);
//        } else {
//            angleInput.text = "Введите сюда нормальное число!";
//        }
//    }
       // TODO Добавь Текст для вывода значения результата (расстояние до)
