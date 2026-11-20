
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100169e0 <.text+0x159e0>:
100169e0:	55                   	push   ebp
100169e1:	8b ec                	mov    ebp,esp
100169e3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100169e6:	85 c9                	test   ecx,ecx
100169e8:	74 05                	je     0x100169ef
100169ea:	8b 49 7c             	mov    ecx,DWORD PTR [ecx+0x7c]
100169ed:	eb 02                	jmp    0x100169f1
100169ef:	33 c9                	xor    ecx,ecx
100169f1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100169f4:	85 c0                	test   eax,eax
100169f6:	74 05                	je     0x100169fd
100169f8:	8b 50 7c             	mov    edx,DWORD PTR [eax+0x7c]
100169fb:	eb 02                	jmp    0x100169ff
100169fd:	33 d2                	xor    edx,edx
100169ff:	85 c9                	test   ecx,ecx
10016a01:	74 23                	je     0x10016a26
10016a03:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10016a06:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x40000000
10016a0d:	00 00 40 
10016a10:	75 14                	jne    0x10016a26
10016a12:	8b 01                	mov    eax,DWORD PTR [ecx]
10016a14:	51                   	push   ecx
10016a15:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10016a1c:	6a 03                	push   0x3
10016a1e:	52                   	push   edx
10016a1f:	52                   	push   edx
10016a20:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
10016a26:	5d                   	pop    ebp
10016a27:	c3                   	ret
