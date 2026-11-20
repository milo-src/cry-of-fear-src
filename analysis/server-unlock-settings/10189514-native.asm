
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10189514 <.text+0x188514>:
10189514:	8b ff                	mov    edi,edi
10189516:	55                   	push   ebp
10189517:	8b ec                	mov    ebp,esp
10189519:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1018951c:	ff 15 60 11 1a 10    	call   DWORD PTR ds:0x101a1160
10189522:	85 c0                	test   eax,eax
10189524:	75 12                	jne    0x10189538
10189526:	ff 15 d0 10 1a 10    	call   DWORD PTR ds:0x101a10d0
1018952c:	50                   	push   eax
1018952d:	e8 41 ca fe ff       	call   0x10175f73
10189532:	59                   	pop    ecx
10189533:	83 c8 ff             	or     eax,0xffffffff
10189536:	5d                   	pop    ebp
10189537:	c3                   	ret
10189538:	33 c0                	xor    eax,eax
1018953a:	5d                   	pop    ebp
1018953b:	c3                   	ret
