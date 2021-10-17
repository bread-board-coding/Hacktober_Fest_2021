var buttons = document.getElementsByClassName("button");
var i;


for (i = 0; i < buttons.length ; i++) {

    buttons[i].addEventListener("click",function(){
        var d = this.nextElementSibling;
        if(d.style.display == "block"){
            d.style.display = "none"
        }else{
            d.style.display="block"
        }
    });
    	
    
} 


