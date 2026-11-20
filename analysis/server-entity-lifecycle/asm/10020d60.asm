
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020d60 <.text+0x1fd60>:
10020d60:	55                   	push   ebp
10020d61:	8b ec                	mov    ebp,esp
10020d63:	56                   	push   esi
10020d64:	57                   	push   edi
10020d65:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10020d68:	8b f1                	mov    esi,ecx
10020d6a:	57                   	push   edi
10020d6b:	e8 90 72 ff ff       	call   0x10018000
10020d70:	85 c0                	test   eax,eax
10020d72:	75 06                	jne    0x10020d7a
10020d74:	5f                   	pop    edi
10020d75:	5e                   	pop    esi
10020d76:	5d                   	pop    ebp
10020d77:	c2 04 00             	ret    0x4
10020d7a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10020d7d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10020d82:	6a 03                	push   0x3
10020d84:	68 5c 1f 21 10       	push   0x10211f5c
10020d89:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
10020d8f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10020d95:	56                   	push   esi
10020d96:	68 08 a1 1a 10       	push   0x101aa108
10020d9b:	85 d2                	test   edx,edx
10020d9d:	74 10                	je     0x10020daf
10020d9f:	03 c2                	add    eax,edx
10020da1:	8b cf                	mov    ecx,edi
10020da3:	50                   	push   eax
10020da4:	e8 17 a0 0f 00       	call   0x1011adc0
10020da9:	5f                   	pop    edi
10020daa:	5e                   	pop    esi
10020dab:	5d                   	pop    ebp
10020dac:	c2 04 00             	ret    0x4
10020daf:	03 01                	add    eax,DWORD PTR [ecx]
10020db1:	8b cf                	mov    ecx,edi
10020db3:	50                   	push   eax
10020db4:	e8 07 a0 0f 00       	call   0x1011adc0
10020db9:	5f                   	pop    edi
10020dba:	5e                   	pop    esi
10020dbb:	5d                   	pop    ebp
10020dbc:	c2 04 00             	ret    0x4
