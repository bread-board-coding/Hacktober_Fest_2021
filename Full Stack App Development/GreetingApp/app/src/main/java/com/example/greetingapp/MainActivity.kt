package com.example.greetingapp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.TextView

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val name = findViewById<EditText>(R.id.etName)
        val greet = findViewById<TextView>(R.id.tvGreet)
        val btnGreet = findViewById<Button>(R.id.btnGreet)

        val nameOfUser = name.text
        btnGreet.setOnClickListener {
            greet.text = nameOfUser
            greet.visibility = View.VISIBLE
        }
    }
}