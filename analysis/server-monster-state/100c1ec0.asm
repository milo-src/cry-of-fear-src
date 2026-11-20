
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1ec0 <.text+0xc0ec0>:
100c1ec0:	55                   	push   ebp
100c1ec1:	8b ec                	mov    ebp,esp
100c1ec3:	56                   	push   esi
100c1ec4:	57                   	push   edi
100c1ec5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100c1ec8:	8b f1                	mov    esi,ecx
100c1eca:	57                   	push   edi
100c1ecb:	e8 50 0c 04 00       	call   0x10102b20
100c1ed0:	85 c0                	test   eax,eax
100c1ed2:	75 06                	jne    0x100c1eda
100c1ed4:	5f                   	pop    edi
100c1ed5:	5e                   	pop    esi
100c1ed6:	5d                   	pop    ebp
100c1ed7:	c2 04 00             	ret    0x4
100c1eda:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c1edd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c1ee2:	6a 31                	push   0x31
100c1ee4:	68 08 6e 21 10       	push   0x10216e08
100c1ee9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
100c1eef:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c1ef5:	56                   	push   esi
100c1ef6:	68 fc 4d 1d 10       	push   0x101d4dfc
100c1efb:	85 d2                	test   edx,edx
100c1efd:	74 10                	je     0x100c1f0f
100c1eff:	03 c2                	add    eax,edx
100c1f01:	8b cf                	mov    ecx,edi
100c1f03:	50                   	push   eax
100c1f04:	e8 b7 8e 05 00       	call   0x1011adc0
100c1f09:	5f                   	pop    edi
100c1f0a:	5e                   	pop    esi
100c1f0b:	5d                   	pop    ebp
100c1f0c:	c2 04 00             	ret    0x4
100c1f0f:	03 01                	add    eax,DWORD PTR [ecx]
100c1f11:	8b cf                	mov    ecx,edi
100c1f13:	50                   	push   eax
100c1f14:	e8 a7 8e 05 00       	call   0x1011adc0
100c1f19:	5f                   	pop    edi
100c1f1a:	5e                   	pop    esi
100c1f1b:	5d                   	pop    ebp
100c1f1c:	c2 04 00             	ret    0x4
