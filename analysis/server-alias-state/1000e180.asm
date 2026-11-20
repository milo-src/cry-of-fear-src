
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e180 <.text+0xd180>:
1000e180:	55                   	push   ebp
1000e181:	8b ec                	mov    ebp,esp
1000e183:	56                   	push   esi
1000e184:	57                   	push   edi
1000e185:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000e188:	8b f1                	mov    esi,ecx
1000e18a:	57                   	push   edi
1000e18b:	e8 30 ff ff ff       	call   0x1000e0c0
1000e190:	85 c0                	test   eax,eax
1000e192:	75 06                	jne    0x1000e19a
1000e194:	5f                   	pop    edi
1000e195:	5e                   	pop    esi
1000e196:	5d                   	pop    ebp
1000e197:	c2 04 00             	ret    0x4
1000e19a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e19d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e1a2:	6a 05                	push   0x5
1000e1a4:	68 28 11 21 10       	push   0x10211128
1000e1a9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1000e1af:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000e1b5:	56                   	push   esi
1000e1b6:	68 2c 2c 1a 10       	push   0x101a2c2c
1000e1bb:	85 d2                	test   edx,edx
1000e1bd:	74 10                	je     0x1000e1cf
1000e1bf:	03 c2                	add    eax,edx
1000e1c1:	8b cf                	mov    ecx,edi
1000e1c3:	50                   	push   eax
1000e1c4:	e8 f7 cb 10 00       	call   0x1011adc0
1000e1c9:	5f                   	pop    edi
1000e1ca:	5e                   	pop    esi
1000e1cb:	5d                   	pop    ebp
1000e1cc:	c2 04 00             	ret    0x4
1000e1cf:	03 01                	add    eax,DWORD PTR [ecx]
1000e1d1:	8b cf                	mov    ecx,edi
1000e1d3:	50                   	push   eax
1000e1d4:	e8 e7 cb 10 00       	call   0x1011adc0
1000e1d9:	5f                   	pop    edi
1000e1da:	5e                   	pop    esi
1000e1db:	5d                   	pop    ebp
1000e1dc:	c2 04 00             	ret    0x4
