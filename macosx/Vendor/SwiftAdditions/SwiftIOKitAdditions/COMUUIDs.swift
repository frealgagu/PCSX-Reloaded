//
//  COMUUIDs.swift
//  SwiftAdditions
//
//  Created by C.W. Betts on 12/6/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

import Foundation


public var kIOHIDDeviceUserClientTypeID: UUID {
	return UUID(uuid: (
		0xFA, 0x12, 0xFA, 0x38, 0x6F, 0x1A, 0x11, 0xD4,
		0xBA, 0x0C, 0x00, 0x05, 0x02, 0x8F, 0x18, 0xD5))
}

public var kIOHIDDeviceInterfaceID: UUID {
	return UUID(uuid: (
		0x78, 0xBD, 0x42, 0x0C, 0x6F, 0x14, 0x11, 0xD4,
		0x94, 0x74, 0x00, 0x05, 0x02, 0x8F, 0x18, 0xD5))
}

public var kIOHIDDeviceInterfaceID121: UUID {
	return UUID(uuid: (
		0x7d, 0xb, 0x51, 0xe, 0x16, 0xd5, 0x11, 0xd7,
		0x9e, 0x9b, 0x0, 0x3, 0x93, 0x99, 0x2e, 0x38))
}

public var kIOHIDDeviceInterfaceID122: UUID {
	return UUID(uuid: (
		0xb7, 0xa, 0xbf, 0x31, 0x16, 0xd5, 0x11, 0xd7,
		0xab, 0x35, 0x0, 0x3, 0x93, 0x99, 0x2e, 0x38))
}

public var kIOHIDQueueInterfaceID: UUID {
	return UUID(uuid: (
		0x81, 0x38, 0x62, 0x9E, 0x6F, 0x14, 0x11, 0xD4,
		0x97, 0x0E, 0x00, 0x05, 0x02, 0x8F, 0x18, 0xD5))
}

public var kIOHIDOutputTransactionInterfaceID: UUID {
	return UUID(uuid: (
		0x80, 0xCD, 0xCC, 0x00, 0x75, 0x5D, 0x11, 0xD4,
		0x80, 0xEF, 0x00, 0x05, 0x02, 0x8F, 0x18, 0xD5))
}

public var kIOCFPlugInInterfaceID: UUID {
	return UUID(uuid: (
		0xC2, 0x44, 0xE8, 0x58, 0x10, 0x9C, 0x11, 0xD4,
		0x91, 0xD4, 0x00, 0x50, 0xE4, 0xC6, 0x42, 0x6F))
}

public var kIOUSBDeviceUserClientTypeID: UUID {
	return UUID(uuid: (
		0x9d, 0xc7, 0xb7, 0x80, 0x9e, 0xc0, 0x11, 0xD4,
		0xa5, 0x4f, 0x00, 0x0a, 0x27, 0x05, 0x28, 0x61))
}

public var kIOUSBDeviceInterfaceID: UUID {
	return UUID(uuid: (
		0x5c, 0x81, 0x87, 0xd0, 0x9e, 0xf3, 0x11, 0xD4,
		0x8b, 0x45, 0x00, 0x0a, 0x27, 0x05, 0x28, 0x61))
}

public var kIOUSBInterfaceUserClientTypeID: UUID {
	return UUID(uuid: (
		0x2d, 0x97, 0x86, 0xc6, 0x9e, 0xf3, 0x11, 0xD4,
		0xad, 0x51, 0x00, 0x0a, 0x27, 0x05, 0x28, 0x61))
}
