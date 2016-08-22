//Problem: We need a simple way to look at a user's badge count and JS points
//Use Node.js to connect to Treehouse's API to get profile information
var http = require("https");
var username = "joshbenner";

function printMessage(username,badgeCount,points){
	var msg = username + " has " + badgeCount + " total badges and " + points + " points";
	console.log(msg);
}

function printError (error) {
	// body...
	console.error(error.message);
}

//Connect to API URL
var request = http.get("https://teamtreehouse.com/" + username + ".json", function(response){
	var body = ""
	//Read the data - GET REQUEST
	response.on('data',function(chunk){
		body += chunk;
	});
	response.on('end',function(){
		//Parse the data
		try{
			var profile = JSON.parse(body);
			printMessage(username,profile.badges.length,profile.points.JavaScript)
		}
		catch{
			printError(error);
		}
		
	});

	//Print the data
});

request.on('error',function(error){
	printError(error);
});

