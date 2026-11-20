
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ef0b0 <.text+0xee0b0>:
100ef0b0:	83 bf 14 23 00 00 00 	cmp    DWORD PTR [edi+0x2314],0x0
100ef0b7:	0f 84 d3 00 00 00    	je     0x100ef190
100ef0bd:	83 bf 10 23 00 00 00 	cmp    DWORD PTR [edi+0x2310],0x0
100ef0c4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100ef0c7:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100ef0cd:	50                   	push   eax
100ef0ce:	6a 00                	push   0x0
100ef0d0:	ff 35 44 65 22 10    	push   DWORD PTR ds:0x10226544
100ef0d6:	6a 01                	push   0x1
100ef0d8:	75 4f                	jne    0x100ef129
100ef0da:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ef0e0:	6a 00                	push   0x0
100ef0e2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef0e8:	6a 00                	push   0x0
100ef0ea:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef0f0:	f3 0f 10 87 18 23 00 	movss  xmm0,DWORD PTR [edi+0x2318]
100ef0f7:	00 
100ef0f8:	83 c4 14             	add    esp,0x14
100ef0fb:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ef100:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100ef106:	68 f0 8b 1a 10       	push   0x101a8bf0
100ef10b:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100ef111:	83 c4 08             	add    esp,0x8
100ef114:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ef11a:	c7 87 18 23 00 00 00 	mov    DWORD PTR [edi+0x2318],0x0
100ef121:	00 00 00 
100ef124:	e9 5d 00 00 00       	jmp    0x100ef186
100ef129:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ef12f:	83 c4 10             	add    esp,0x10
100ef132:	80 bf 1c 23 00 00 00 	cmp    BYTE PTR [edi+0x231c],0x0
100ef139:	74 04                	je     0x100ef13f
100ef13b:	6a 01                	push   0x1
100ef13d:	eb 02                	jmp    0x100ef141
100ef13f:	6a 00                	push   0x0
100ef141:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef147:	83 c4 04             	add    esp,0x4
100ef14a:	6a 01                	push   0x1
100ef14c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef152:	f3 0f 10 87 20 23 00 	movss  xmm0,DWORD PTR [edi+0x2320]
100ef159:	00 
100ef15a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ef15f:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100ef165:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef16a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100ef170:	03 87 10 23 00 00    	add    eax,DWORD PTR [edi+0x2310]
100ef176:	50                   	push   eax
100ef177:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100ef17d:	83 c4 08             	add    esp,0x8
100ef180:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ef186:	c7 87 14 23 00 00 00 	mov    DWORD PTR [edi+0x2314],0x0
100ef18d:	00 00 00 
