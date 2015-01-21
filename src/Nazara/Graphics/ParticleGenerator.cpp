// Copyright (C) 2015 Jérôme Leclercq
// This file is part of the "Nazara Engine - Graphics module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Graphics/ParticleGenerator.hpp>
#include <Nazara/Graphics/Debug.hpp>

NzParticleGenerator::NzParticleGenerator(const NzParticleGenerator& generator) :
NzResource()
{
	NazaraUnused(generator);
}

NzParticleGenerator::~NzParticleGenerator() = default;
