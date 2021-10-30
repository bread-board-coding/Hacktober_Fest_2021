const testWrapper = document.querySelector(".test-wrapper");
const testArea = document.querySelector("#test-area");
let originText = document.querySelector("#origin-text p");
const nextButton = document.querySelector("#next");
const previousButton = document.querySelector("#previous");
const resetButton = document.querySelector("#reset");
const theTimer = document.querySelector(".timer");
let time = [0, 0 , 0, 0];
let interval;

let timerRuning = false;

//List of questions
const questions = {
    
    question1: 'This challenge is to prove that you have what it takes to be a very fast typer. So if you can finish this in a considerable amount of time, You are good to go.',
    
    question2: 'The quick brown fox chased the squirrel back into its whole and got injured in the process.',
    
    question3: 'This is a really tough challenge because you have to type all these words under 30 seconds. Do you have what it takes? If yes, show me.',
    
    question4: 'You have been really impressive, now continue practising and timing yourself to see if you can break your previous record. Remember, you got this!',
    
    question5: 'The text to test. You want to do this a little bit fast please'
    
}

//Go to previous question
const goToPrevious = () => {
    
    reset();
    let num = Object.values(questions).findIndex((question) => {
        return question == originText.innerHTML;
    });
    
    num == 0 ? originText.innerHTML = Object.values(questions)[4] : originText.innerHTML = Object.values(questions)[num - 1];
    
    console.log(originText.innerHTML);
}


//Go to next question

const goToNext = () => {
    reset();
    let num = Object.values(questions).findIndex((question) => {
        return question == originText.innerHTML;
    });
    
    num == 4 ? originText.innerHTML = Object.values(questions)[0] : originText.innerHTML = Object.values(questions)[num + 1];
    
    console.log(originText.innerHTML);
}

// Add leading zero to numbers 9 or below (purely for aesthetics):
const addLeadingZero = (time) => {
    if (time < 10) {
       time = `0${time}`; 
    } else {
        time = time;
    }
    return time;
}

// Run a standard minute/second/hundredths timer:
const runTimer = () => {
    let currentTime = `${addLeadingZero(time[0])} : ${addLeadingZero(time[1])} : ${addLeadingZero(time[2])}`;

    time[3]++;
    
    time[0] = Math.floor((time[3]/100) / 60);
    
    
    time[1] = Math.floor((time[3]/100) - (time[0] * 60));
    
    time[2] = Math.floor((time[3]) - (time[1] * 100) - (time[0] * 6000));
    
    
    theTimer.innerHTML = currentTime;
}

// Match the text entered with the provided text on the page:
const checkText = () => {
    let textCheck = testArea.value;
    if (textCheck == originText.innerHTML) {
       testWrapper.style.borderColor = 'green';
        stop();
    } else {
        if (originText.innerHTML.includes(textCheck)) {
            testWrapper.style.borderColor = 'rgba(0, 255, 0, 0.5)';
        } else {
            testWrapper.style.borderColor = 'red';
        }
    }
}

// Start the timer:
const start = () => {
  let textEntered = testArea.value.length;
  if (textEntered === 0 && theTimer.innerHTML === `00:00:00` && !timerRuning) {
    timerRuning = true;
    interval = setInterval(runTimer, 10)
  } else {
    null;  
  } 
}

//stop Timer
const stop = () => {
    clearInterval(interval);
}

// Reset everything:
const reset = () => {
    stop();
    interval = null;
    
    time = [0, 0 , 0, 0]
    testArea.value = ``;
    theTimer.innerHTML = `00:00:00`;
    timerRuning = false;
    testWrapper.style.borderColor = '#B4DB24';
}

// Event listeners for keyboard input and the reset button:
testArea.addEventListener('keydown', start, false);
testArea.addEventListener('keyup', checkText, false);
nextButton.addEventListener('click', goToNext, false);
previousButton.addEventListener('click', goToPrevious, false);
resetButton.addEventListener('click', reset, false);
