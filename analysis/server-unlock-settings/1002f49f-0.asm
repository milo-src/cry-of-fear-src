
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002f49f <.text+0x2e49f>:
1002f49f:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
1002f4a6:	84 db                	test   bl,bl
1002f4a8:	75 03                	jne    0x1002f4ad
1002f4aa:	83 cf 02             	or     edi,0x2
1002f4ad:	8b 06                	mov    eax,DWORD PTR [esi]
1002f4af:	b9 04 00 00 00       	mov    ecx,0x4
1002f4b4:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1002f4b7:	8b 44 32 0c          	mov    eax,DWORD PTR [edx+esi*1+0xc]
1002f4bb:	03 d6                	add    edx,esi
1002f4bd:	0b c7                	or     eax,edi
1002f4bf:	33 ff                	xor    edi,edi
1002f4c1:	39 7a 38             	cmp    DWORD PTR [edx+0x38],edi
1002f4c4:	0f 45 cf             	cmovne ecx,edi
1002f4c7:	0b c8                	or     ecx,eax
1002f4c9:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
1002f4cc:	83 e1 17             	and    ecx,0x17
1002f4cf:	89 4a 0c             	mov    DWORD PTR [edx+0xc],ecx
1002f4d2:	23 c1                	and    eax,ecx
1002f4d4:	75 30                	jne    0x1002f506
1002f4d6:	8b 4d d4             	mov    ecx,DWORD PTR [ebp-0x2c]
1002f4d9:	c7 45 fc 04 00 00 00 	mov    DWORD PTR [ebp-0x4],0x4
1002f4e0:	8b 01                	mov    eax,DWORD PTR [ecx]
1002f4e2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002f4e5:	8b 4c 08 38          	mov    ecx,DWORD PTR [eax+ecx*1+0x38]
1002f4e9:	85 c9                	test   ecx,ecx
1002f4eb:	74 05                	je     0x1002f4f2
1002f4ed:	8b 11                	mov    edx,DWORD PTR [ecx]
1002f4ef:	ff 52 08             	call   DWORD PTR [edx+0x8]
1002f4f2:	8b c6                	mov    eax,esi
1002f4f4:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1002f4f7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002f4fe:	59                   	pop    ecx
1002f4ff:	5f                   	pop    edi
1002f500:	5e                   	pop    esi
1002f501:	5b                   	pop    ebx
1002f502:	8b e5                	mov    esp,ebp
1002f504:	5d                   	pop    ebp
1002f505:	c3                   	ret
1002f506:	a8 04                	test   al,0x4
1002f508:	74 07                	je     0x1002f511
1002f50a:	be 5c da 1a 10       	mov    esi,0x101ada5c
1002f50f:	eb 0f                	jmp    0x1002f520
1002f511:	a8 02                	test   al,0x2
1002f513:	be 74 da 1a 10       	mov    esi,0x101ada74
1002f518:	b8 8c da 1a 10       	mov    eax,0x101ada8c
1002f51d:	0f 44 f0             	cmove  esi,eax
1002f520:	8d 45 dc             	lea    eax,[ebp-0x24]
1002f523:	6a 01                	push   0x1
1002f525:	50                   	push   eax
1002f526:	e8 25 88 00 00       	call   0x10037d50
1002f52b:	83 c4 08             	add    esp,0x8
1002f52e:	8d 4d c0             	lea    ecx,[ebp-0x40]
1002f531:	50                   	push   eax
1002f532:	56                   	push   esi
1002f533:	e8 c8 0b 00 00       	call   0x10030100
1002f538:	68 cc 48 20 10       	push   0x102048cc
1002f53d:	8d 45 c0             	lea    eax,[ebp-0x40]
1002f540:	50                   	push   eax
1002f541:	e8 76 0b 11 00       	call   0x101400bc
