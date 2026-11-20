
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c5090 <.text+0xc4090>:
100c5090:	55                   	push   ebp
100c5091:	8b ec                	mov    ebp,esp
100c5093:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100c5096:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
100c5099:	53                   	push   ebx
100c509a:	56                   	push   esi
100c509b:	8b 72 10             	mov    esi,DWORD PTR [edx+0x10]
100c509e:	8d 59 01             	lea    ebx,[ecx+0x1]
100c50a1:	8a 01                	mov    al,BYTE PTR [ecx]
100c50a3:	41                   	inc    ecx
100c50a4:	84 c0                	test   al,al
100c50a6:	75 f9                	jne    0x100c50a1
100c50a8:	b8 ff ff ff 7f       	mov    eax,0x7fffffff
100c50ad:	2b cb                	sub    ecx,ebx
100c50af:	2b c6                	sub    eax,esi
100c50b1:	3b c1                	cmp    eax,ecx
100c50b3:	72 23                	jb     0x100c50d8
100c50b5:	83 7a 14 10          	cmp    DWORD PTR [edx+0x14],0x10
100c50b9:	8b c2                	mov    eax,edx
100c50bb:	72 02                	jb     0x100c50bf
100c50bd:	8b 02                	mov    eax,DWORD PTR [edx]
100c50bf:	51                   	push   ecx
100c50c0:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100c50c3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100c50c6:	56                   	push   esi
100c50c7:	50                   	push   eax
100c50c8:	52                   	push   edx
100c50c9:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100c50cc:	e8 0f 00 00 00       	call   0x100c50e0
100c50d1:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c50d4:	5e                   	pop    esi
100c50d5:	5b                   	pop    ebx
100c50d6:	5d                   	pop    ebp
100c50d7:	c3                   	ret
100c50d8:	e8 e3 25 f7 ff       	call   0x100376c0
