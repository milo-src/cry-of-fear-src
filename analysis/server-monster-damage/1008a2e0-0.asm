
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008a2e0 <.text+0x892e0>:
1008a2e0:	55                   	push   ebp
1008a2e1:	8b ec                	mov    ebp,esp
1008a2e3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1008a2e6:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1008a2ec:	85 c0                	test   eax,eax
1008a2ee:	75 10                	jne    0x1008a300
1008a2f0:	50                   	push   eax
1008a2f1:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1008a2f7:	83 c4 04             	add    esp,0x4
1008a2fa:	85 c0                	test   eax,eax
1008a2fc:	75 02                	jne    0x1008a300
1008a2fe:	5d                   	pop    ebp
1008a2ff:	c3                   	ret
1008a300:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
1008a303:	5d                   	pop    ebp
1008a304:	c3                   	ret
