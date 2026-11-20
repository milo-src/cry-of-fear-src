
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01d471b1 <.text+0x461b1>:
 1d471b1:	55                   	push   ebp
 1d471b2:	8b ec                	mov    ebp,esp
 1d471b4:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
 1d471b8:	75 02                	jne    0x1d471bc
 1d471ba:	eb 14                	jmp    0x1d471d0
 1d471bc:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d471bf:	50                   	push   eax
 1d471c0:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
 1d471c3:	51                   	push   ecx
 1d471c4:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d471c7:	52                   	push   edx
 1d471c8:	e8 8a 13 00 00       	call   0x1d48557
 1d471cd:	83 c4 0c             	add    esp,0xc
 1d471d0:	5d                   	pop    ebp
 1d471d1:	c3                   	ret
