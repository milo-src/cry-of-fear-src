
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01e712a6 <.text+0x1702a6>:
 1e712a6:	6a 00                	push   0x0
 1e712a8:	6a 01                	push   0x1
 1e712aa:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
 1e712ae:	e8 22 00 00 00       	call   0x1e712d5
 1e712b3:	83 c4 0c             	add    esp,0xc
 1e712b6:	c3                   	ret
 1e712b7:	6a 01                	push   0x1
 1e712b9:	6a 00                	push   0x0
 1e712bb:	6a 00                	push   0x0
 1e712bd:	e8 13 00 00 00       	call   0x1e712d5
 1e712c2:	83 c4 0c             	add    esp,0xc
 1e712c5:	c3                   	ret
 1e712c6:	6a 01                	push   0x1
 1e712c8:	6a 01                	push   0x1
 1e712ca:	6a 00                	push   0x0
 1e712cc:	e8 04 00 00 00       	call   0x1e712d5
 1e712d1:	83 c4 0c             	add    esp,0xc
 1e712d4:	c3                   	ret
 1e712d5:	57                   	push   edi
 1e712d6:	e8 9f 00 00 00       	call   0x1e7137a
 1e712db:	6a 01                	push   0x1
 1e712dd:	5f                   	pop    edi
 1e712de:	39 3d cc 0f 50 02    	cmp    DWORD PTR ds:0x2500fcc,edi
 1e712e4:	75 11                	jne    0x1e712f7
 1e712e6:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
 1e712ea:	ff 15 94 b2 e8 01    	call   DWORD PTR ds:0x1e8b294
 1e712f0:	50                   	push   eax
 1e712f1:	ff 15 48 b2 e8 01    	call   DWORD PTR ds:0x1e8b248
 1e712f7:	83 7c 24 0c 00       	cmp    DWORD PTR [esp+0xc],0x0
 1e712fc:	53                   	push   ebx
 1e712fd:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
 1e71301:	89 3d c8 0f 50 02    	mov    DWORD PTR ds:0x2500fc8,edi
 1e71307:	88 1d c4 0f 50 02    	mov    BYTE PTR ds:0x2500fc4,bl
 1e7130d:	75 3c                	jne    0x1e7134b
 1e7130f:	a1 b4 b1 fb 02       	mov    eax,ds:0x2fbb1b4
 1e71314:	85 c0                	test   eax,eax
 1e71316:	74 22                	je     0x1e7133a
 1e71318:	8b 0d b0 b1 fb 02    	mov    ecx,DWORD PTR ds:0x2fbb1b0
 1e7131e:	56                   	push   esi
 1e7131f:	8d 71 fc             	lea    esi,[ecx-0x4]
 1e71322:	3b f0                	cmp    esi,eax
 1e71324:	72 13                	jb     0x1e71339
 1e71326:	8b 06                	mov    eax,DWORD PTR [esi]
 1e71328:	85 c0                	test   eax,eax
 1e7132a:	74 02                	je     0x1e7132e
 1e7132c:	ff d0                	call   eax
 1e7132e:	83 ee 04             	sub    esi,0x4
 1e71331:	3b 35 b4 b1 fb 02    	cmp    esi,DWORD PTR ds:0x2fbb1b4
 1e71337:	73 ed                	jae    0x1e71326
 1e71339:	5e                   	pop    esi
 1e7133a:	68 04 81 ea 01       	push   0x1ea8104
 1e7133f:	68 fc 80 ea 01       	push   0x1ea80fc
 1e71344:	e8 43 00 00 00       	call   0x1e7138c
 1e71349:	59                   	pop    ecx
 1e7134a:	59                   	pop    ecx
 1e7134b:	68 10 81 ea 01       	push   0x1ea8110
 1e71350:	68 08 81 ea 01       	push   0x1ea8108
 1e71355:	e8 32 00 00 00       	call   0x1e7138c
 1e7135a:	59                   	pop    ecx
 1e7135b:	59                   	pop    ecx
 1e7135c:	85 db                	test   ebx,ebx
 1e7135e:	5b                   	pop    ebx
 1e7135f:	74 07                	je     0x1e71368
 1e71361:	e8 1d 00 00 00       	call   0x1e71383
 1e71366:	5f                   	pop    edi
 1e71367:	c3                   	ret
 1e71368:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
 1e7136c:	89 3d cc 0f 50 02    	mov    DWORD PTR ds:0x2500fcc,edi
 1e71372:	ff 15 4c b2 e8 01    	call   DWORD PTR ds:0x1e8b24c
 1e71378:	5f                   	pop    edi
 1e71379:	c3                   	ret
