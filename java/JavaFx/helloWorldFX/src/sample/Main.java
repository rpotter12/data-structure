package sample;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.geometry.Pos;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.GridPane;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.stage.Stage;

import java.awt.*;

public class Main extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception{
        Parent root = FXMLLoader.load(getClass().getResource("sample.fxml"));


        primaryStage.setScene(new Scene(root, 700, 275));
        primaryStage.setTitle("JavaFX");
        /* To write something in the area */
//        GridPane root = new GridPane();
        /* set alignment of the text */
//        root.setAlignment(Pos.CENTER);
        /* x-y position for the text */
//        root.setVgap(10);
//        root.setHgap(10);
        /* command to write text */
//        Label greeting = new Label("welcome to JavaFX");
        /* set the color of the text */
//        greeting.setTextFill(Color.GREEN);
        /* set the font of the text */
//        greeting.setFont(Font.font("Times New Roman", FontWeight.BOLD,70));
//        root.getChildren().add(greeting);

        primaryStage.show();
    }


    public static void main(String[] args) {
        launch(args);
    }
}
