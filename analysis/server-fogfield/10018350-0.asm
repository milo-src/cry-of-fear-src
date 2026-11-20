
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10018350 <.text+0x17350>:
10018350:	55                   	push   ebp
10018351:	8b ec                	mov    ebp,esp
10018353:	8b 01                	mov    eax,DWORD PTR [ecx]
10018355:	ff 50 5c             	call   DWORD PTR [eax+0x5c]
10018358:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1001835b:	83 f9 03             	cmp    ecx,0x3
1001835e:	74 20                	je     0x10018380
10018360:	83 f9 02             	cmp    ecx,0x2
10018363:	74 1b                	je     0x10018380
10018365:	83 f8 03             	cmp    eax,0x3
10018368:	77 16                	ja     0x10018380
1001836a:	ff 24 85 8c 83 01 10 	jmp    DWORD PTR [eax*4+0x1001838c]
10018371:	83 f9 01             	cmp    ecx,0x1
10018374:	eb 02                	jmp    0x10018378
10018376:	85 c9                	test   ecx,ecx
10018378:	75 06                	jne    0x10018380
1001837a:	33 c0                	xor    eax,eax
1001837c:	5d                   	pop    ebp
1001837d:	c2 04 00             	ret    0x4
10018380:	b8 01 00 00 00       	mov    eax,0x1
10018385:	5d                   	pop    ebp
10018386:	c2 04 00             	ret    0x4
