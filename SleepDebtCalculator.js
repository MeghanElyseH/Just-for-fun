//This program acts as a calculator for sleep debt. Done on CodeAcademy 
function getSleepHours(day) {
  switch(day) {
    case 'monday':
      return 8;
      break;
    case 'tuesday':
      return 8;
      break;
    case 'wednesday':
      return 8;
      break;
    case 'thursday':
      return 8;
      break;
    case 'friday':
      return 8;
      break;
    case 'saturday':
      return 8;
      break;
    case 'sunday':
      return 8;
      break;   
  }
}
function getActualSleepHours() {
  return getSleepHours('monday') + getSleepHours('tuesday') + getSleepHours('wednesday') + getSleepHours('thursday') + getSleepHours('friday') + getSleepHours('saturday') + getSleepHours('sunday')
}
function getIdealSleepHours() {
  var idealHours = 8
  return idealHours * 7;
}
function calculateSleepDebt() {
  var actualSleepHours = getActualSleepHours();
  var idealSleepHours = getIdealSleepHours();
  
  if (actualSleepHours === idealSleepHours ) {
    console.log('you got the perfect amount of sleep!');
  } else if (actualSleepHours > idealSleepHours) {
    console.log('you got more sleep than needed.')
  } else {
    console.log('you should get some rest.')
  }
  console.log('your sleep debt for the week was: ', idealSleepHours - actualSleepHours);
}

calculateSleepDebt();




