/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_ThreeCom,
    0x426da293,0xa505,0x4edf,0xa1,0xff,0x4c,0x1f,0x95,0x9a,0xd2,0xa2);
// {426da293-a505-4edf-a1ff-4c1f959ad2a2}
