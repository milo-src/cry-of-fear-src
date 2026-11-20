
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020010 <.text+0x1f010>:
10020010:	55                   	push   ebp
10020011:	8b ec                	mov    ebp,esp
10020013:	56                   	push   esi
10020014:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10020017:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002001a:	85 f6                	test   esi,esi
1002001c:	75 13                	jne    0x10020031
1002001e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10020024:	85 c0                	test   eax,eax
10020026:	74 06                	je     0x1002002e
10020028:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1002002e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10020031:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10020037:	85 c9                	test   ecx,ecx
10020039:	74 07                	je     0x10020042
1002003b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1002003e:	85 c0                	test   eax,eax
10020040:	75 27                	jne    0x10020069
10020042:	68 f8 01 00 00       	push   0x1f8
10020047:	51                   	push   ecx
10020048:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1002004e:	83 c4 08             	add    esp,0x8
10020051:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10020054:	85 c0                	test   eax,eax
10020056:	74 0c                	je     0x10020064
10020058:	c7 00 0c 99 1a 10    	mov    DWORD PTR [eax],0x101a990c
1002005e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10020061:	5e                   	pop    esi
10020062:	5d                   	pop    ebp
10020063:	c3                   	ret
10020064:	33 c0                	xor    eax,eax
10020066:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10020069:	5e                   	pop    esi
1002006a:	5d                   	pop    ebp
1002006b:	c3                   	ret
