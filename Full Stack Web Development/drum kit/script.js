const w=document.getElementById("w");
const g=document.getElementById("g");
const s=document.getElementById("s");
const d=document.getElementById("d");
const j=document.getElementById("j");
const k=document.getElementById("k");
const l=document.getElementById("l");


w.addEventListener("click",()=>{
    // console.log(1);
    var sound1 = new Audio("Sound/snare.mp3");
    sound1.play();
    // w.classList.add("animation");
});
g.addEventListener("click",()=>{
    // console.log(2);
    var sound1 = new Audio("Sound/crash.mp3");
    sound1.play();
});
s.addEventListener("click",()=>{
    // console.log(3);
    var sound1 = new Audio("Sound/kick-bass.mp3");
    sound1.play();
});
d.addEventListener("click",()=>{
    // console.log(4);
    var sound1 = new Audio("Sound/tom-1.mp3");
    sound1.play();
});
j.addEventListener("click",()=>{
    // console.log(5);
    var sound1 = new Audio("Sound/tom-2.mp3");
    sound1.play();
});
k.addEventListener("click",()=>{
    // console.log(6);
    var sound1 = new Audio("Sound/tom-3.mp3");
    sound1.play();
});
l.addEventListener("click",()=>{
    // console.log(7);
    var sound1 = new Audio("Sound/tom-4.mp3");
    sound1.play();
});