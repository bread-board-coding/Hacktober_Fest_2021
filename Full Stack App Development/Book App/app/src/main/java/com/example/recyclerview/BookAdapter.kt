package com.example.recyclerview

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide

class BookAdapter(val context: Context, private val dataSet:ArrayList<Book>): RecyclerView.Adapter<BookAdapter.ViewHolder>() {

    inner class ViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView){
        val Title: TextView = itemView.findViewById<TextView>(R.id.title)
        val image: ImageView = itemView.findViewById<ImageView>(R.id.imageView)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val view = LayoutInflater.from(context).inflate(R.layout.item_view,parent,false)
        return ViewHolder(view)
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {

        holder.Title.text = dataSet[position].Title
        Glide.with(context)
            .asBitmap()
            .load(dataSet[position].Url)
            .into(holder.image)
    }

    override fun getItemCount(): Int {
        return dataSet.size
    }
}