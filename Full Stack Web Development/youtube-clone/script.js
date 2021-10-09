var header = document.querySelector(".header-navbar");
var ctg = header.getElementsByClassName("navbar-element");

for (var i = 0; i < ctg.length; i++) {
  ctg[i].addEventListener("click", function() {
      var current = document.getElementsByClassName("active");
      current[0].className = current[0].className.replace(" active", "");
      this.className += " active";
  });
}


var sidebar = document.querySelector(".sidebar");
var sidebarCategory = sidebar.getElementsByClassName("sidebar-category");

for (var i = 0; i < sidebarCategory.length; i++) {
    sidebarCategory[i].addEventListener("click", function() {
        var current1 = document.getElementsByClassName("selected");
        current1[0].className = current1[0].className.replace(" selected", "");
        // current2[0].className = current2[0].className.replace(" selected-img", "");
        this.className += " selected";      
    });
}

var sidebarImg = sidebar.getElementsByClassName("sidebar-category-sml");

for (var i = 0; i < sidebarImg.length; i++) {
    sidebarImg[i].addEventListener("click", function() {
        var current = document.getElementsByClassName("selected-img");
        console.log(current);
        current[0].className = current[0].className.replace(" active", "");
        this.className += " selected-img";
    });
}