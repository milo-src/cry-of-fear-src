
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116990 <.text+0x115990>:
10116990:	55                   	push   ebp
10116991:	8b ec                	mov    ebp,esp
10116993:	56                   	push   esi
10116994:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10116997:	85 f6                	test   esi,esi
10116999:	74 2e                	je     0x101169c9
1011699b:	8a 06                	mov    al,BYTE PTR [esi]
1011699d:	84 c0                	test   al,al
1011699f:	74 28                	je     0x101169c9
101169a1:	3c 2a                	cmp    al,0x2a
101169a3:	74 34                	je     0x101169d9
101169a5:	6a 00                	push   0x0
101169a7:	56                   	push   esi
101169a8:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
101169ae:	83 c4 08             	add    esp,0x8
101169b1:	85 c0                	test   eax,eax
101169b3:	74 24                	je     0x101169d9
101169b5:	50                   	push   eax
101169b6:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
101169bc:	56                   	push   esi
101169bd:	ff 15 48 2f 22 10    	call   DWORD PTR ds:0x10222f48
101169c3:	83 c4 08             	add    esp,0x8
101169c6:	5e                   	pop    esi
101169c7:	5d                   	pop    ebp
101169c8:	c3                   	ret
101169c9:	68 3c 57 1e 10       	push   0x101e573c
101169ce:	6a 01                	push   0x1
101169d0:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101169d6:	83 c4 08             	add    esp,0x8
101169d9:	33 c0                	xor    eax,eax
101169db:	5e                   	pop    esi
101169dc:	5d                   	pop    ebp
101169dd:	c3                   	ret
