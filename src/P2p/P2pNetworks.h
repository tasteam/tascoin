// Copyright (c) 2012-2016, The CryptoNote developers
//
// Copyright (c) 2018 Crepcoin Devs
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "../CryptoNoteConfig.h"

#pragma once

namespace CryptoNote
{
	namespace
	{
		boost::uuids::uuid name;
		boost::uuids::name_generator gen(name);
		boost::uuids::uuid u = gen(GENESIS_COINBASE_TX_HEX);
	}
	const static boost::uuids::uuid BYTECOIN_NETWORK = { { 0x02, 0x0e, 0x1e, 0x6c, 0x4a, 0x5a, 0x01, 0xfa, 0x5b, 0x45, 0x33, 0xcc, 0xff, 0x01, 0x44, 0x41 } };
}

