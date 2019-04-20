/* This is a program that checks if a password is valid based off of various parameters. Done in CodeAcademy for fun! */

// Ensures password contains an uppercase letter
function hasUppercase(input){
  for(var i = 0; i < input.length; i++) {
    if(input[i] === input[i].toUpperCase()) {
      return true;
    }
  }
}

// Ensures password contains a lowercase letter
function hasLowerCase(input){
  for(var i = 0; i < input.length; i++) {
    if(input[i] === input[i].toLowerCase()) {
      return true;
    }
  }
}

// Ensures password is at least 8 characters long
function charLength(input){
  if(input.length >= 8){
    return true;
  }
}

// Ensures password contains a special character
function specialChar(input){
  var specialCharacters = ['!','@','#','$','%','^','&','*'];
  for(var i = 0; i < input.length; i++){
    for (var j = 0; j < specialCharacters.length; j++){
      if(input[i] === specialCharacters[j]) {
        return true;
      }
    }
  }
}

// Lets the user know if the password is valid
function isPasswordValid(input){
  if(!hasUppercase(input)){
    console.log('password needs an uppercase');
  } if (!hasLowerCase(input)){
    console.log('password needs a lowercase');
  } if(!charLength(input)){
    console.log('password must be at least 8 characters');
  } if(!specialChar(input)){
    console.log('password must contain a special character');
  }
  if(hasUppercase(input) && hasLowerCase(input) && charLength(input) && specialChar(input)) {
    console.log('password is valid');
  } 
} 

// Test Case
isPasswordValid('Boo!!!!!!');
