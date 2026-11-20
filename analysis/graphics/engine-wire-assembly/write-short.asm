
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01d47080 <.text+0x46080>:
 1d47080:	55                   	push   ebp
 1d47081:	8b ec                	mov    ebp,esp
 1d47083:	51                   	push   ecx
 1d47084:	6a 02                	push   0x2
 1d47086:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d47089:	50                   	push   eax
 1d4708a:	e8 59 13 00 00       	call   0x1d483e8
 1d4708f:	83 c4 08             	add    esp,0x8
 1d47092:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1d47095:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1d47098:	81 e1 ff 00 00 00    	and    ecx,0xff
 1d4709e:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1d470a1:	88 0a                	mov    BYTE PTR [edx],cl
 1d470a3:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d470a6:	c1 f8 08             	sar    eax,0x8
 1d470a9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 1d470ac:	88 41 01             	mov    BYTE PTR [ecx+0x1],al
 1d470af:	8b e5                	mov    esp,ebp
 1d470b1:	5d                   	pop    ebp
 1d470b2:	c3                   	ret
