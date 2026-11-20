
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011f260 <.text+0x11e260>:
1011f260:	55                   	push   ebp
1011f261:	8b ec                	mov    ebp,esp
1011f263:	56                   	push   esi
1011f264:	57                   	push   edi
1011f265:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1011f268:	8b f1                	mov    esi,ecx
1011f26a:	57                   	push   edi
1011f26b:	e8 70 fb ff ff       	call   0x1011ede0
1011f270:	85 c0                	test   eax,eax
1011f272:	75 06                	jne    0x1011f27a
1011f274:	5f                   	pop    edi
1011f275:	5e                   	pop    esi
1011f276:	5d                   	pop    ebp
1011f277:	c2 04 00             	ret    0x4
1011f27a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1011f27d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011f282:	6a 02                	push   0x2
1011f284:	68 70 b5 21 10       	push   0x1021b570
1011f289:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1011f28f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011f295:	56                   	push   esi
1011f296:	68 bc 67 1e 10       	push   0x101e67bc
1011f29b:	85 d2                	test   edx,edx
1011f29d:	74 10                	je     0x1011f2af
1011f29f:	03 c2                	add    eax,edx
1011f2a1:	8b cf                	mov    ecx,edi
1011f2a3:	50                   	push   eax
1011f2a4:	e8 17 bb ff ff       	call   0x1011adc0
1011f2a9:	5f                   	pop    edi
1011f2aa:	5e                   	pop    esi
1011f2ab:	5d                   	pop    ebp
1011f2ac:	c2 04 00             	ret    0x4
1011f2af:	03 01                	add    eax,DWORD PTR [ecx]
1011f2b1:	8b cf                	mov    ecx,edi
1011f2b3:	50                   	push   eax
1011f2b4:	e8 07 bb ff ff       	call   0x1011adc0
1011f2b9:	5f                   	pop    edi
1011f2ba:	5e                   	pop    esi
1011f2bb:	5d                   	pop    ebp
1011f2bc:	c2 04 00             	ret    0x4
