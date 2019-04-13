//Meghan Hom
//User inputs rock, paper, scissors, or bomb (bomb is the secret cheat code to auto win!)
var userInput = 'Rock';
userInput = userInput.toLowerCase();

//Computer choice
function getComputerChoice() {
  var randomNumber = Math.floor(Math.random() * 3);
  switch(randomNumber) {
    case 0:
      return 'rock';
    case 1:
      return 'paper';
    case 2:
      return 'scissors';
  }
}

//Determines the winner of the game
function determineWinner(userChoice, computerChoice) {
  if  (userChoice === computerChoice) {
    return 'it\'s a tie!'
  } else if (userChoice === 'rock') {
    if(computerChoice === 'paper') {
      return 'computer wins!';
    } else {
      return 'you win!';
    }
  }
  if (userChoice === 'paper') {
    if (computerChoice === 'scissors') {
      return 'computer wins!';
    } else {
      return 'you win!';
    }
  }
  if (userChoice === 'scissors') {
    if (computerChoice === 'paper') {
      return 'you win!';
    } else {
      return 'computer wins!';
    }
  }
  if (userChoice === 'bomb') {
    return 'cheat code! You win!!!';
  }
}

function playGame() {
  var userChoice = userInput;
  var computerChoice = getComputerChoice();
  console.log('You threw: ' + userChoice);
  console.log('The computer threw: ' + computerChoice);
  console.log(determineWinner(userChoice, computerChoice));
}
playGame();


