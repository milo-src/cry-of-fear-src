
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10189547 <.text+0x188547>:
10189547:	8b ff                	mov    edi,edi
10189549:	55                   	push   ebp
1018954a:	8b ec                	mov    ebp,esp
1018954c:	6a 02                	push   0x2
1018954e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10189551:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10189554:	ff 15 64 11 1a 10    	call   DWORD PTR ds:0x101a1164
1018955a:	85 c0                	test   eax,eax
1018955c:	75 12                	jne    0x10189570
1018955e:	ff 15 d0 10 1a 10    	call   DWORD PTR ds:0x101a10d0
10189564:	50                   	push   eax
10189565:	e8 09 ca fe ff       	call   0x10175f73
1018956a:	59                   	pop    ecx
1018956b:	83 c8 ff             	or     eax,0xffffffff
1018956e:	5d                   	pop    ebp
1018956f:	c3                   	ret
10189570:	33 c0                	xor    eax,eax
10189572:	5d                   	pop    ebp
10189573:	c3                   	ret
