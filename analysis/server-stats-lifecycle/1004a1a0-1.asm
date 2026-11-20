
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004a299 <.text+0x49299>:
1004a299:	ba 04 00 00 00       	mov    edx,0x4
1004a29e:	8b 06                	mov    eax,DWORD PTR [esi]
1004a2a0:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004a2a3:	8b 44 31 0c          	mov    eax,DWORD PTR [ecx+esi*1+0xc]
1004a2a7:	03 ce                	add    ecx,esi
1004a2a9:	0b c7                	or     eax,edi
1004a2ab:	33 ff                	xor    edi,edi
1004a2ad:	39 79 38             	cmp    DWORD PTR [ecx+0x38],edi
1004a2b0:	0f 45 d7             	cmovne edx,edi
1004a2b3:	0b d0                	or     edx,eax
1004a2b5:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
1004a2b8:	83 e2 17             	and    edx,0x17
1004a2bb:	89 51 0c             	mov    DWORD PTR [ecx+0xc],edx
1004a2be:	23 c2                	and    eax,edx
1004a2c0:	75 47                	jne    0x1004a309
1004a2c2:	c7 45 fc 04 00 00 00 	mov    DWORD PTR [ebp-0x4],0x4
1004a2c9:	e8 92 84 0d 00       	call   0x10122760
1004a2ce:	84 c0                	test   al,al
1004a2d0:	75 08                	jne    0x1004a2da
1004a2d2:	8b 4d d8             	mov    ecx,DWORD PTR [ebp-0x28]
1004a2d5:	e8 76 d2 fe ff       	call   0x10037550
1004a2da:	8b 4d d8             	mov    ecx,DWORD PTR [ebp-0x28]
1004a2dd:	c6 45 fc 05          	mov    BYTE PTR [ebp-0x4],0x5
1004a2e1:	8b 01                	mov    eax,DWORD PTR [ecx]
1004a2e3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004a2e6:	8b 4c 08 38          	mov    ecx,DWORD PTR [eax+ecx*1+0x38]
1004a2ea:	85 c9                	test   ecx,ecx
1004a2ec:	74 05                	je     0x1004a2f3
1004a2ee:	8b 01                	mov    eax,DWORD PTR [ecx]
1004a2f0:	ff 50 08             	call   DWORD PTR [eax+0x8]
1004a2f3:	8b c6                	mov    eax,esi
1004a2f5:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1004a2f8:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1004a2ff:	59                   	pop    ecx
1004a300:	5f                   	pop    edi
1004a301:	5e                   	pop    esi
1004a302:	5b                   	pop    ebx
1004a303:	8b e5                	mov    esp,ebp
1004a305:	5d                   	pop    ebp
1004a306:	c2 04 00             	ret    0x4
1004a309:	a8 04                	test   al,0x4
1004a30b:	74 07                	je     0x1004a314
1004a30d:	be 5c da 1a 10       	mov    esi,0x101ada5c
1004a312:	eb 0f                	jmp    0x1004a323
1004a314:	a8 02                	test   al,0x2
1004a316:	be 74 da 1a 10       	mov    esi,0x101ada74
1004a31b:	b8 8c da 1a 10       	mov    eax,0x101ada8c
1004a320:	0f 44 f0             	cmove  esi,eax
1004a323:	8d 45 d0             	lea    eax,[ebp-0x30]
1004a326:	6a 01                	push   0x1
1004a328:	50                   	push   eax
1004a329:	e8 22 da fe ff       	call   0x10037d50
1004a32e:	83 c4 08             	add    esp,0x8
1004a331:	8d 4d bc             	lea    ecx,[ebp-0x44]
1004a334:	50                   	push   eax
1004a335:	56                   	push   esi
1004a336:	e8 c5 5d fe ff       	call   0x10030100
1004a33b:	68 cc 48 20 10       	push   0x102048cc
1004a340:	8d 45 bc             	lea    eax,[ebp-0x44]
1004a343:	50                   	push   eax
1004a344:	e8 73 5d 0f 00       	call   0x101400bc
