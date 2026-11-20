
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101202f0 <.text+0x11f2f0>:
101202f0:	56                   	push   esi
101202f1:	8b f1                	mov    esi,ecx
101202f3:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
101202f9:	85 c9                	test   ecx,ecx
101202fb:	74 7f                	je     0x1012037c
101202fd:	8b 01                	mov    eax,DWORD PTR [ecx]
101202ff:	ff 50 20             	call   DWORD PTR [eax+0x20]
10120302:	85 c0                	test   eax,eax
10120304:	74 76                	je     0x1012037c
10120306:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10120309:	ba bc c2 1a 10       	mov    edx,0x101ac2bc
1012030e:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
10120314:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1012031a:	f7 d9                	neg    ecx
1012031c:	1b c9                	sbb    ecx,ecx
1012031e:	23 c8                	and    ecx,eax
10120320:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10120325:	8b 09                	mov    ecx,DWORD PTR [ecx]
10120327:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1012032d:	0f 1f 00             	nop    DWORD PTR [eax]
10120330:	8a 01                	mov    al,BYTE PTR [ecx]
10120332:	3a 02                	cmp    al,BYTE PTR [edx]
10120334:	75 1a                	jne    0x10120350
10120336:	84 c0                	test   al,al
10120338:	74 12                	je     0x1012034c
1012033a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1012033d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
10120340:	75 0e                	jne    0x10120350
10120342:	83 c1 02             	add    ecx,0x2
10120345:	83 c2 02             	add    edx,0x2
10120348:	84 c0                	test   al,al
1012034a:	75 e4                	jne    0x10120330
1012034c:	33 c0                	xor    eax,eax
1012034e:	eb 05                	jmp    0x10120355
10120350:	1b c0                	sbb    eax,eax
10120352:	83 c8 01             	or     eax,0x1
10120355:	85 c0                	test   eax,eax
10120357:	75 07                	jne    0x10120360
10120359:	b8 01 00 00 00       	mov    eax,0x1
1012035e:	5e                   	pop    esi
1012035f:	c3                   	ret
10120360:	6b 8e 68 01 00 00 2c 	imul   ecx,DWORD PTR [esi+0x168],0x2c
10120367:	8b 81 94 18 23 10    	mov    eax,DWORD PTR [ecx+0x10231894]
1012036d:	85 c0                	test   eax,eax
1012036f:	7e 18                	jle    0x10120389
10120371:	8b 81 a4 18 23 10    	mov    eax,DWORD PTR [ecx+0x102318a4]
10120377:	5e                   	pop    esi
10120378:	8d 04 40             	lea    eax,[eax+eax*2]
1012037b:	c3                   	ret
1012037c:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
10120383:	8b 80 94 18 23 10    	mov    eax,DWORD PTR [eax+0x10231894]
10120389:	5e                   	pop    esi
1012038a:	c3                   	ret
