
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004a453 <.text+0x49453>:
1004a453:	ba 04 00 00 00       	mov    edx,0x4
1004a458:	8b 06                	mov    eax,DWORD PTR [esi]
1004a45a:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004a45d:	8b 44 31 0c          	mov    eax,DWORD PTR [ecx+esi*1+0xc]
1004a461:	03 ce                	add    ecx,esi
1004a463:	0b c7                	or     eax,edi
1004a465:	33 ff                	xor    edi,edi
1004a467:	39 79 38             	cmp    DWORD PTR [ecx+0x38],edi
1004a46a:	0f 45 d7             	cmovne edx,edi
1004a46d:	0b d0                	or     edx,eax
1004a46f:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
1004a472:	83 e2 17             	and    edx,0x17
1004a475:	89 51 0c             	mov    DWORD PTR [ecx+0xc],edx
1004a478:	23 c2                	and    eax,edx
1004a47a:	75 47                	jne    0x1004a4c3
1004a47c:	c7 45 fc 04 00 00 00 	mov    DWORD PTR [ebp-0x4],0x4
1004a483:	e8 d8 82 0d 00       	call   0x10122760
1004a488:	84 c0                	test   al,al
1004a48a:	75 08                	jne    0x1004a494
1004a48c:	8b 4d d4             	mov    ecx,DWORD PTR [ebp-0x2c]
1004a48f:	e8 bc d0 fe ff       	call   0x10037550
1004a494:	8b 4d d4             	mov    ecx,DWORD PTR [ebp-0x2c]
1004a497:	c6 45 fc 05          	mov    BYTE PTR [ebp-0x4],0x5
1004a49b:	8b 01                	mov    eax,DWORD PTR [ecx]
1004a49d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004a4a0:	8b 4c 08 38          	mov    ecx,DWORD PTR [eax+ecx*1+0x38]
1004a4a4:	85 c9                	test   ecx,ecx
1004a4a6:	74 05                	je     0x1004a4ad
1004a4a8:	8b 01                	mov    eax,DWORD PTR [ecx]
1004a4aa:	ff 50 08             	call   DWORD PTR [eax+0x8]
1004a4ad:	8b c6                	mov    eax,esi
1004a4af:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1004a4b2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1004a4b9:	59                   	pop    ecx
1004a4ba:	5f                   	pop    edi
1004a4bb:	5e                   	pop    esi
1004a4bc:	5b                   	pop    ebx
1004a4bd:	8b e5                	mov    esp,ebp
1004a4bf:	5d                   	pop    ebp
1004a4c0:	c2 04 00             	ret    0x4
1004a4c3:	a8 04                	test   al,0x4
1004a4c5:	74 07                	je     0x1004a4ce
1004a4c7:	be 5c da 1a 10       	mov    esi,0x101ada5c
1004a4cc:	eb 0f                	jmp    0x1004a4dd
1004a4ce:	a8 02                	test   al,0x2
1004a4d0:	be 74 da 1a 10       	mov    esi,0x101ada74
1004a4d5:	b8 8c da 1a 10       	mov    eax,0x101ada8c
1004a4da:	0f 44 f0             	cmove  esi,eax
1004a4dd:	8d 45 cc             	lea    eax,[ebp-0x34]
1004a4e0:	6a 01                	push   0x1
1004a4e2:	50                   	push   eax
1004a4e3:	e8 68 d8 fe ff       	call   0x10037d50
1004a4e8:	83 c4 08             	add    esp,0x8
1004a4eb:	8d 4d b8             	lea    ecx,[ebp-0x48]
1004a4ee:	50                   	push   eax
1004a4ef:	56                   	push   esi
1004a4f0:	e8 0b 5c fe ff       	call   0x10030100
1004a4f5:	68 cc 48 20 10       	push   0x102048cc
1004a4fa:	8d 45 b8             	lea    eax,[ebp-0x48]
1004a4fd:	50                   	push   eax
1004a4fe:	e8 b9 5b 0f 00       	call   0x101400bc
