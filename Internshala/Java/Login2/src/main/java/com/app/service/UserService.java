package com.app.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.app.dao.User;
import com.app.repository.UserRepositry;

@Service
public class UserService {

	@Autowired
	private UserRepositry repo;
	
	public User saveUser(User user) {
		return repo.save(user);
	}
	public User fetchUserByEmailId(String email) {
		return repo.findByEmail(email);
	}
	
	public User fetchUserByEmailIdAndPassword(String email,String password) {
		
		return repo.findByEmailAndPassword(email,password);
	}
}
