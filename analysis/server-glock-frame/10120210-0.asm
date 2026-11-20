
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10120210 <.text+0x11f210>:
10120210:	55                   	push   ebp
10120211:	8b ec                	mov    ebp,esp
10120213:	51                   	push   ecx
10120214:	56                   	push   esi
10120215:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10120218:	8b f1                	mov    esi,ecx
1012021a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1012021d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10120223:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
10120229:	83 c4 04             	add    esp,0x4
1012022c:	50                   	push   eax
1012022d:	e8 5e f1 ee ff       	call   0x1000f390
10120232:	83 c4 08             	add    esp,0x8
10120235:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
10120238:	e8 e3 a8 ff ff       	call   0x1011ab20
1012023d:	d8 45 08             	fadd   DWORD PTR [ebp+0x8]
10120240:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10120246:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10120249:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1012024e:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10120255:	00 
10120256:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1012025c:	f3 0f 10 80 08 03 00 	movss  xmm0,DWORD PTR [eax+0x308]
10120263:	00 
10120264:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
1012026b:	00 
1012026c:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10120273:	00 
10120274:	e8 a7 a8 ff ff       	call   0x1011ab20
10120279:	d8 45 08             	fadd   DWORD PTR [ebp+0x8]
1012027c:	d9 9e d8 01 00 00    	fstp   DWORD PTR [esi+0x1d8]
10120282:	5e                   	pop    esi
10120283:	8b e5                	mov    esp,ebp
10120285:	5d                   	pop    ebp
10120286:	c2 04 00             	ret    0x4
