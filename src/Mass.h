#pragma once


struct Mass {
	float mass;
	float inv_mass;

	// For Rotations
	float inertia;
	float inverse_inertia;
};