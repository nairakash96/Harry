package com.app.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.app.dao.User;

@Repository
public interface UserRepositry extends JpaRepository<User, Long> {
	
public User findByEmail(String email);

public User findByEmailAndPassword(String email, String password);
}
