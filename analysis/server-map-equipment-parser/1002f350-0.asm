
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002f350 <.text+0x2e350>:
1002f350:	55                   	push   ebp
1002f351:	8b ec                	mov    ebp,esp
1002f353:	6a ff                	push   0xffffffff
1002f355:	68 b5 d2 19 10       	push   0x1019d2b5
1002f35a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002f360:	50                   	push   eax
1002f361:	83 ec 34             	sub    esp,0x34
1002f364:	53                   	push   ebx
1002f365:	56                   	push   esi
1002f366:	57                   	push   edi
1002f367:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1002f36c:	33 c5                	xor    eax,ebp
1002f36e:	50                   	push   eax
1002f36f:	8d 45 f4             	lea    eax,[ebp-0xc]
1002f372:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1002f378:	89 65 f0             	mov    DWORD PTR [ebp-0x10],esp
1002f37b:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1002f37e:	33 ff                	xor    edi,edi
1002f380:	32 db                	xor    bl,bl
1002f382:	89 7d e0             	mov    DWORD PTR [ebp-0x20],edi
1002f385:	88 5d ef             	mov    BYTE PTR [ebp-0x11],bl
1002f388:	89 75 d4             	mov    DWORD PTR [ebp-0x2c],esi
1002f38b:	8b 06                	mov    eax,DWORD PTR [esi]
1002f38d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002f390:	8b 4c 30 38          	mov    ecx,DWORD PTR [eax+esi*1+0x38]
1002f394:	85 c9                	test   ecx,ecx
1002f396:	74 05                	je     0x1002f39d
1002f398:	8b 01                	mov    eax,DWORD PTR [ecx]
1002f39a:	ff 50 04             	call   DWORD PTR [eax+0x4]
1002f39d:	6a 01                	push   0x1
1002f39f:	8b ce                	mov    ecx,esi
1002f3a1:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1002f3a8:	e8 53 7f 00 00       	call   0x10037300
1002f3ad:	88 45 d8             	mov    BYTE PTR [ebp-0x28],al
1002f3b0:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
1002f3b7:	84 c0                	test   al,al
1002f3b9:	0f 84 eb 00 00 00    	je     0x1002f4aa
1002f3bf:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1002f3c2:	8b c1                	mov    eax,ecx
1002f3c4:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
1002f3c8:	c7 41 10 00 00 00 00 	mov    DWORD PTR [ecx+0x10],0x0
1002f3cf:	83 79 14 10          	cmp    DWORD PTR [ecx+0x14],0x10
1002f3d3:	72 02                	jb     0x1002f3d7
1002f3d5:	8b 01                	mov    eax,DWORD PTR [ecx]
1002f3d7:	c6 00 00             	mov    BYTE PTR [eax],0x0
1002f3da:	0f b6 45 10          	movzx  eax,BYTE PTR [ebp+0x10]
1002f3de:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
1002f3e1:	8b 06                	mov    eax,DWORD PTR [esi]
1002f3e3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002f3e6:	8b 54 30 38          	mov    edx,DWORD PTR [eax+esi*1+0x38]
1002f3ea:	8b 42 1c             	mov    eax,DWORD PTR [edx+0x1c]
1002f3ed:	8b 00                	mov    eax,DWORD PTR [eax]
1002f3ef:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
1002f3f2:	85 c0                	test   eax,eax
1002f3f4:	74 10                	je     0x1002f406
1002f3f6:	8b 42 2c             	mov    eax,DWORD PTR [edx+0x2c]
1002f3f9:	83 38 00             	cmp    DWORD PTR [eax],0x0
1002f3fc:	7e 08                	jle    0x1002f406
1002f3fe:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
1002f401:	0f b6 00             	movzx  eax,BYTE PTR [eax]
1002f404:	eb 0a                	jmp    0x1002f410
1002f406:	8b 02                	mov    eax,DWORD PTR [edx]
1002f408:	8b ca                	mov    ecx,edx
1002f40a:	ff 50 18             	call   DWORD PTR [eax+0x18]
1002f40d:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1002f410:	83 f8 ff             	cmp    eax,0xffffffff
1002f413:	75 08                	jne    0x1002f41d
1002f415:	8d 78 02             	lea    edi,[eax+0x2]
1002f418:	e9 82 00 00 00       	jmp    0x1002f49f
1002f41d:	3b 45 e4             	cmp    eax,DWORD PTR [ebp-0x1c]
1002f420:	75 30                	jne    0x1002f452
1002f422:	8b 06                	mov    eax,DWORD PTR [esi]
1002f424:	b3 01                	mov    bl,0x1
1002f426:	88 5d ef             	mov    BYTE PTR [ebp-0x11],bl
1002f429:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002f42c:	8b 4c 30 38          	mov    ecx,DWORD PTR [eax+esi*1+0x38]
1002f430:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
1002f433:	83 38 00             	cmp    DWORD PTR [eax],0x0
1002f436:	74 13                	je     0x1002f44b
1002f438:	8b 51 2c             	mov    edx,DWORD PTR [ecx+0x2c]
1002f43b:	8b 02                	mov    eax,DWORD PTR [edx]
1002f43d:	85 c0                	test   eax,eax
1002f43f:	7e 0a                	jle    0x1002f44b
1002f441:	48                   	dec    eax
1002f442:	89 02                	mov    DWORD PTR [edx],eax
1002f444:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
1002f447:	ff 00                	inc    DWORD PTR [eax]
1002f449:	eb 54                	jmp    0x1002f49f
1002f44b:	8b 01                	mov    eax,DWORD PTR [ecx]
1002f44d:	ff 50 1c             	call   DWORD PTR [eax+0x1c]
1002f450:	eb 4d                	jmp    0x1002f49f
1002f452:	81 79 10 ff ff ff 7f 	cmp    DWORD PTR [ecx+0x10],0x7fffffff
1002f459:	72 07                	jb     0x1002f462
1002f45b:	bf 02 00 00 00       	mov    edi,0x2
1002f460:	eb 3d                	jmp    0x1002f49f
1002f462:	50                   	push   eax
1002f463:	e8 08 8c 00 00       	call   0x10038070
1002f468:	8b 06                	mov    eax,DWORD PTR [esi]
1002f46a:	b3 01                	mov    bl,0x1
1002f46c:	88 5d ef             	mov    BYTE PTR [ebp-0x11],bl
1002f46f:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1002f472:	8b 4c 31 38          	mov    ecx,DWORD PTR [ecx+esi*1+0x38]
1002f476:	e8 b5 8f 00 00       	call   0x10038430
1002f47b:	eb 90                	jmp    0x1002f40d
