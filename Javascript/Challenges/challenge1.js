// JSApps Dates
function getDayName(dayParam) {
  const time = new Date(dayParam);
  let date = new Date(time);
  date.toDateString();
  let day = date.getDay();
  const daysOfWeek = [
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
  ];

  if (day === 0) {
    console.log(daysOfWeek[0]);
  } else if (day === 1) {
    console.log(daysOfWeek[1]);
  } else if (day === 2) {
    console.log(daysOfWeek[2]);
  } else if (day === 3) {
    console.log(daysOfWeek[3]);
  } else if (day === 4) {
    console.log(daysOfWeek[4]);
  } else if (day === 5) {
    console.log(daysOfWeek[5]);
  } else {
    console.log(daysOfWeek[6]);
  }
}

getDayName("20 Jan 2021");
getDayName("1 Jan 1970");
