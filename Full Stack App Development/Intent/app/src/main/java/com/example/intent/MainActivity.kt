package com.example.intent

import android.content.Intent
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*

const val KEY = "Name"
class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        button.setOnClickListener {
            val i = Intent(this,SecondActivity::class.java)
            val name  = editText.text.toString()
            i.putExtra(KEY,name)
            startActivity(i)
        }

        btnDial.setOnClickListener {
            val mobile = editText.text.toString()
            val i = Intent()
            i.action = Intent.ACTION_DIAL
            i.data = Uri.parse("tel:$mobile")
            startActivity(i)
        }

        btnBrowse.setOnClickListener {
            val address = editText.text.toString()
            val i = Intent()
            i.action = Intent.ACTION_VIEW
            i.data = Uri.parse("http:// $address")
            startActivity(i)
        }
    }
}