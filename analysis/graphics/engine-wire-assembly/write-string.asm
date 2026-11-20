
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01d47171 <.text+0x46171>:
 1d47171:	55                   	push   ebp
 1d47172:	8b ec                	mov    ebp,esp
 1d47174:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
 1d47178:	75 15                	jne    0x1d4718f
 1d4717a:	6a 01                	push   0x1
 1d4717c:	68 cc 9b 07 02       	push   0x2079bcc
 1d47181:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d47184:	50                   	push   eax
 1d47185:	e8 cd 13 00 00       	call   0x1d48557
 1d4718a:	83 c4 0c             	add    esp,0xc
 1d4718d:	eb 20                	jmp    0x1d471af
 1d4718f:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1d47192:	51                   	push   ecx
 1d47193:	e8 2a f5 ff ff       	call   0x1d466c2
 1d47198:	83 c4 04             	add    esp,0x4
 1d4719b:	83 c0 01             	add    eax,0x1
 1d4719e:	50                   	push   eax
 1d4719f:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
 1d471a2:	52                   	push   edx
 1d471a3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d471a6:	50                   	push   eax
 1d471a7:	e8 ab 13 00 00       	call   0x1d48557
 1d471ac:	83 c4 0c             	add    esp,0xc
 1d471af:	5d                   	pop    ebp
 1d471b0:	c3                   	ret
