var numberofdrums = document.querySelectorAll(".drum").length;
for (var i = 0; i < numberofdrums; i++) {
    document.querySelectorAll(".drum")[i].addEventListener("click", function(){;
   
        var number = this.innerHTML;
        makeSound(number);
        buttonAnimation(number);
    })
}
    
// document.querySelector("button").addEventListener("click",handleclick);
// always remember that this object is used to point the stuff that whose arguments we are passing or we can say that object to which we are point ;

document.addEventListener("keypress",function(event){
    // alert("key is pressed !");
    // console.log(event);
    makeSound(event.key);
    buttonAnimation(event.key);
})
function makeSound(kk){
switch (kk) {
    case "w":
        var  tom1 = new Audio("sounds/tom-1.mp3")
        tom1.play();
        break;
    case "a":
        var  tom2 = new Audio("sounds/tom-2.mp3")
        tom2.play();

        break;
    case "s":
        var  tom3 = new Audio("sounds/tom-3.mp3")
        tom3.play();

        break;
    case "d":
        var  tom4 = new Audio("sounds/tom-4.mp3")
        tom4.play();

        break;
    case "j":
        var  tom5 = new Audio("sounds/snare.mp3")
        tom5.play();

        break;
    case "k":
        var tom6 = new Audio("sounds/kick-bass.mp3")
        tom6.play();

        break;
    case "l":
        var  tom7 = new Audio("sounds/crash.mp3")
        tom7.play();

        break;
    default:
        console.log("reload the screen")
        break;
}} 

function buttonAnimation(numberoftype){
    var activeButton=document.querySelector("."+numberoftype);
    activeButton.classList.add("pressed");

    // function for timeout that is known as set timeout
    setTimeout(function(){
        activeButton.classList.remove("pressed")
    },100);
}
