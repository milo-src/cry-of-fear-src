
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b8f0 <.text+0x11a8f0>:
1011b8f0:	55                   	push   ebp
1011b8f1:	8b ec                	mov    ebp,esp
1011b8f3:	8b 0d 34 1f 23 10    	mov    ecx,DWORD PTR ds:0x10231f34
1011b8f9:	85 c9                	test   ecx,ecx
1011b8fb:	74 1f                	je     0x1011b91c
1011b8fd:	ff 35 3c 1f 23 10    	push   DWORD PTR ds:0x10231f3c
1011b903:	f3 0f 10 05 38 1f 23 	movss  xmm0,DWORD PTR ds:0x10231f38
1011b90a:	10 
1011b90b:	8b 01                	mov    eax,DWORD PTR [ecx]
1011b90d:	51                   	push   ecx
1011b90e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011b913:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011b916:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b919:	ff 50 64             	call   DWORD PTR [eax+0x64]
1011b91c:	5d                   	pop    ebp
1011b91d:	c3                   	ret
