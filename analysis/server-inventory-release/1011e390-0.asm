
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011e390 <.text+0x11d390>:
1011e390:	55                   	push   ebp
1011e391:	8b ec                	mov    ebp,esp
1011e393:	56                   	push   esi
1011e394:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011e397:	57                   	push   edi
1011e398:	56                   	push   esi
1011e399:	8b f9                	mov    edi,ecx
1011e39b:	e8 b0 ef ff ff       	call   0x1011d350
1011e3a0:	85 c0                	test   eax,eax
1011e3a2:	0f 85 e6 00 00 00    	jne    0x1011e48e
1011e3a8:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1011e3ae:	85 c9                	test   ecx,ecx
1011e3b0:	74 11                	je     0x1011e3c3
1011e3b2:	8b 01                	mov    eax,DWORD PTR [ecx]
1011e3b4:	56                   	push   esi
1011e3b5:	ff 90 90 00 00 00    	call   DWORD PTR [eax+0x90]
1011e3bb:	85 c0                	test   eax,eax
1011e3bd:	0f 84 cb 00 00 00    	je     0x1011e48e
1011e3c3:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1011e3c6:	8b ce                	mov    ecx,esi
1011e3c8:	89 87 dc 00 00 00    	mov    DWORD PTR [edi+0xdc],eax
1011e3ce:	8b 06                	mov    eax,DWORD PTR [esi]
1011e3d0:	ff 90 80 01 00 00    	call   DWORD PTR [eax+0x180]
1011e3d6:	8b 8c 87 e0 00 00 00 	mov    ecx,DWORD PTR [edi+eax*4+0xe0]
1011e3dd:	85 c9                	test   ecx,ecx
1011e3df:	74 0f                	je     0x1011e3f0
1011e3e1:	89 8e 64 01 00 00    	mov    DWORD PTR [esi+0x164],ecx
1011e3e7:	89 b4 87 e0 00 00 00 	mov    DWORD PTR [edi+eax*4+0xe0],esi
1011e3ee:	eb 11                	jmp    0x1011e401
1011e3f0:	89 b4 87 e0 00 00 00 	mov    DWORD PTR [edi+eax*4+0xe0],esi
1011e3f7:	c7 86 64 01 00 00 00 	mov    DWORD PTR [esi+0x164],0x0
1011e3fe:	00 00 00 
1011e401:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e404:	81 88 a4 01 00 00 00 	or     DWORD PTR [eax+0x1a4],0x40000000
1011e40b:	00 00 40 
1011e40e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e411:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
1011e418:	00 00 00 
1011e41b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e41e:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
1011e425:	00 00 00 
1011e428:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e42b:	c7 80 18 01 00 00 80 	mov    DWORD PTR [eax+0x118],0x80
1011e432:	00 00 00 
1011e435:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e438:	c7 80 b4 00 00 00 00 	mov    DWORD PTR [eax+0xb4],0x0
1011e43f:	00 00 00 
1011e442:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e445:	c7 80 b8 00 00 00 00 	mov    DWORD PTR [eax+0xb8],0x0
1011e44c:	00 00 00 
1011e44f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011e452:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1011e455:	5f                   	pop    edi
1011e456:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1011e45c:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
1011e462:	b8 01 00 00 00       	mov    eax,0x1
1011e467:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
1011e46e:	c7 46 7c 00 00 00 00 	mov    DWORD PTR [esi+0x7c],0x0
1011e475:	c7 86 60 01 00 00 00 	mov    DWORD PTR [esi+0x160],0x0
1011e47c:	00 00 00 
1011e47f:	c7 86 14 01 00 00 00 	mov    DWORD PTR [esi+0x114],0x0
1011e486:	00 00 00 
1011e489:	5e                   	pop    esi
1011e48a:	5d                   	pop    ebp
1011e48b:	c2 08 00             	ret    0x8
1011e48e:	5f                   	pop    edi
1011e48f:	33 c0                	xor    eax,eax
1011e491:	5e                   	pop    esi
1011e492:	5d                   	pop    ebp
1011e493:	c2 08 00             	ret    0x8
