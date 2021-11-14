package com.app.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.app.dao.User;
import com.app.service.UserService;

@RestController
@CrossOrigin(origins = "http://localhost:4200")
public class UserController {

	@Autowired
	private UserService service;

	@PostMapping("/register")
	public User registerUser(@RequestBody User user) throws Exception {
		String tempemail = user.getEmail();
		if (tempemail != null && !"".equals(tempemail)) {
			User userObj = service.fetchUserByEmailId(tempemail);
			if (userObj != null) {
				throw new Exception("User with " + tempemail + " already exist");
			}
		}
		User userObj = null;
		userObj = service.saveUser(user);
		return userObj;
	}

	@PostMapping("/login")
	public User login(@RequestBody User user) throws Exception {
		String tempEmail = user.getEmail();
		String tempPassword = user.getPassword();
		User userObj = null;
		if (tempEmail != null && tempPassword != null) {
			userObj = service.fetchUserByEmailIdAndPassword(tempEmail, tempPassword);
		}
		if (userObj == null) {
			throw new Exception("User dose not exist ");
		}
		return userObj;
	}

}
