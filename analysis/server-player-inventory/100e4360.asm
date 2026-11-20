
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e4360 <.text+0xe3360>:
100e4360:	55                   	push   ebp
100e4361:	8b ec                	mov    ebp,esp
100e4363:	53                   	push   ebx
100e4364:	56                   	push   esi
100e4365:	8b f1                	mov    esi,ecx
100e4367:	33 db                	xor    ebx,ebx
100e4369:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e436c:	38 9e 9c 1e 00 00    	cmp    BYTE PTR [esi+0x1e9c],bl
100e4372:	0f 95 c3             	setne  bl
100e4375:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e437b:	6a 00                	push   0x0
100e437d:	ff 35 e4 65 22 10    	push   DWORD PTR ds:0x102265e4
100e4383:	6a 01                	push   0x1
100e4385:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e438b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100e438e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e4394:	6a 00                	push   0x0
100e4396:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e439c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e43a1:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e43a7:	03 45 0c             	add    eax,DWORD PTR [ebp+0xc]
100e43aa:	50                   	push   eax
100e43ab:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100e43b1:	53                   	push   ebx
100e43b2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e43b8:	83 c4 20             	add    esp,0x20
100e43bb:	80 be f8 1e 00 00 00 	cmp    BYTE PTR [esi+0x1ef8],0x0
100e43c2:	74 04                	je     0x100e43c8
100e43c4:	6a 01                	push   0x1
100e43c6:	eb 02                	jmp    0x100e43ca
100e43c8:	6a 00                	push   0x0
100e43ca:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e43d0:	83 c4 04             	add    esp,0x4
100e43d3:	8b ce                	mov    ecx,esi
100e43d5:	e8 c6 e0 ff ff       	call   0x100e24a0
100e43da:	84 c0                	test   al,al
100e43dc:	74 04                	je     0x100e43e2
100e43de:	6a 01                	push   0x1
100e43e0:	eb 02                	jmp    0x100e43e4
100e43e2:	6a 00                	push   0x0
100e43e4:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e43ea:	83 c4 04             	add    esp,0x4
100e43ed:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e43f3:	80 be f8 1e 00 00 00 	cmp    BYTE PTR [esi+0x1ef8],0x0
100e43fa:	74 07                	je     0x100e4403
100e43fc:	c6 86 f8 1e 00 00 00 	mov    BYTE PTR [esi+0x1ef8],0x0
100e4403:	5e                   	pop    esi
100e4404:	5b                   	pop    ebx
100e4405:	5d                   	pop    ebp
100e4406:	c2 0c 00             	ret    0xc
