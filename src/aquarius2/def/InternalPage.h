#pragma once

#define INTERNAL_PAGE_RESET	"data:text/html;base64,CjwhZG9jdHlwZSBodG1sPgo8aHRtbD4KICAgIDxoZWFkPgogICAgICAgIDwhLS0gbWV0YSBkYXRhIC0tPgogICAgICAgIDxtZXRhIGNoYXJzZXQ9InV0Zi04Ij4KICAgICAgICA8bWV0YSBodHRwLWVxdWl2PSJYLVVBLUNvbXBhdGlibGUiIGNvbnRlbnQ9IklFPWVkZ2UiPgogICAgICAgIDxtZXRhIG5hbWU9InZpZXdwb3J0IiBjb250ZW50PSJ3aWR0aD1kZXZpY2Utd2lkdGgsIGluaXRpYWwtc2NhbGU9MSI+CiAgICAgICAgPCEtLSBUaGUgYWJvdmUgMyBtZXRhIHRhZ3MgKm11c3QqIGNvbWUgZmlyc3QgaW4gdGhlIGhlYWQ7IGFueSBvdGhlciBoZWFkIGNvbnRlbnQgbXVzdCBjb21lICphZnRlciogdGhlc2UgdGFncyAtLT4KCiAgICAgICAgPCEtLWZvbnQtZmFtaWx5LS0+CgkJPGxpbmsgaHJlZj0iYXNzZXRzL2Nzcy9mb250LWZhbWlseS5jc3MiIHJlbD0ic3R5bGVzaGVldCI+CiAgICAgICAgCiAgICAgICAgPCEtLSB0aXRsZSBvZiBzaXRlIC0tPgogICAgICAgIDx0aXRsZT5FQ0VGIEF1dGhvcml6YXRpb248L3RpdGxlPgoKICAgICAgICA8IS0tIEZvciBmYXZpY29uIHBuZyAtLT4KCQk8bGluayByZWw9InNob3J0Y3V0IGljb24iIHR5cGU9ImltYWdlL2ljb24iIGhyZWY9ImFzc2V0cy9sb2dvL2Zhdmljb24ucG5nIi8+CiAgICAgICAKICAgICAgICA8IS0tZm9udC1hd2Vzb21lLm1pbi5jc3MtLT4KICAgICAgICA8bGluayByZWw9InN0eWxlc2hlZXQiIGhyZWY9ImFzc2V0cy9jc3MvZm9udC1hd2Vzb21lLm1pbi5jc3MiPgoJCQoJCTwhLS1hbmltYXRlLmNzcy0tPgogICAgICAgIDxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9hbmltYXRlLmNzcyI+CgkJCiAgICAgICAgPCEtLWJvb3RzdHJhcC5taW4uY3NzLS0+CiAgICAgICAgPGxpbmsgcmVsPSJzdHlsZXNoZWV0IiBocmVmPSJhc3NldHMvY3NzL2Jvb3RzdHJhcC5taW4uY3NzIj4KCQkKCQk8IS0tIGJvb3RzbmF2IC0tPgoJCTxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9ib290c25hdi5jc3MiID4JCiAgICAgICAgCiAgICAgICAgPCEtLXN0eWxlLmNzcy0tPgogICAgICAgIDxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9zdHlsZS5jc3MiPgogICAgICAgIAogICAgICAgIDwhLS1yZXNwb25zaXZlLmNzcy0tPgogICAgICAgIDxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9yZXNwb25zaXZlLmNzcyI+CiAgICAgICAgCiAgICAgICAgPCEtLSBIVE1MNSBzaGltIGFuZCBSZXNwb25kLmpzIGZvciBJRTggc3VwcG9ydCBvZiBIVE1MNSBlbGVtZW50cyBhbmQgbWVkaWEgcXVlcmllcyAtLT4KICAgICAgICA8IS0tIFdBUk5JTkc6IFJlc3BvbmQuanMgZG9lc24ndCB3b3JrIGlmIHlvdSB2aWV3IHRoZSBwYWdlIHZpYSBmaWxlOi8vIC0tPgoJCQogICAgICAgIDwhLS1baWYgbHQgSUUgOV0+CgkJCTxzY3JpcHQgc3JjPSJodHRwczovL29zcy5tYXhjZG4uY29tL2h0bWw1c2hpdi8zLjcuMy9odG1sNXNoaXYubWluLmpzIj48L3NjcmlwdD4KCQkJPHNjcmlwdCBzcmM9Imh0dHBzOi8vb3NzLm1heGNkbi5jb20vcmVzcG9uZC8xLjQuMi9yZXNwb25kLm1pbi5qcyI+PC9zY3JpcHQ+CiAgICAgICAgPCFbZW5kaWZdLS0+CgogICAgPC9oZWFkPgoJCgk8Ym9keSBzdHlsZT0ib3ZlcmZsb3c6IGhpZGRlbjsiPgoJCTwhLS1baWYgbHRlIElFIDldPgogICAgICAgICAgICA8cCBjbGFzcz0iYnJvd3NlcnVwZ3JhZGUiPllvdSBhcmUgdXNpbmcgYW4gPHN0cm9uZz5vdXRkYXRlZDwvc3Ryb25nPiBicm93c2VyLiBQbGVhc2UgPGEgaHJlZj0iaHR0cHM6Ly9icm93c2VoYXBweS5jb20vIj51cGdyYWRlIHlvdXIgYnJvd3NlcjwvYT4gdG8gaW1wcm92ZSB5b3VyIGV4cGVyaWVuY2UgYW5kIHNlY3VyaXR5LjwvcD4KICAgICAgICA8IVtlbmRpZl0tLT4KCQkKCQk8IS0tIHNpZ25pbiBlbmQgLS0+CgkJPHNlY3Rpb24gY2xhc3M9InNpZ25pbiBzaWdudXAiPgoJCQk8ZGl2IGNsYXNzPSJjb250YWluZXIiPgoKCQkJCTxkaXYgY2xhc3M9InNpZ24tY29udGVudCI+CgkJCQkJPGRpdiBjbGFzcz0ic2lnbmluLWZvcm0iPgoJCQkJCQk8ZGl2IGNsYXNzPSIgIj4KCQkJCQkJCTxkaXYgY2xhc3M9IiAiPgoJCQkJCQkJCTxmb3JtIGFjdGlvbj0ic2lnbmluLmh0bWwiPgoJCQkJCQkJCQk8ZGl2IGNsYXNzPSJmb3JtLWdyb3VwIj4KCQkJCQkJCQkJICAgIDxsYWJlbCBmb3I9InNpZ25pbl9mb3JtIj7nlKjmiLflkI08L2xhYmVsPgoJCQkJCQkJCQkgICAgPGlucHV0IHR5cGU9InRleHQiIGNsYXNzPSJmb3JtLWNvbnRyb2wiIGlkPSJ1c2VybmFtZSIgcGxhY2Vob2xkZXI9IuS9oOeahOeUqOaIt+WQjSI+CgkJCQkJCQkJCTwvZGl2PjwhLS0vLmZvcm0tZ3JvdXAgLS0+CgkJCQkJCQkJCTxkaXYgY2xhc3M9ImZvcm0tZ3JvdXAiPgoJCQkJCQkJCQkJPGxhYmVsIGZvcj0ic2lnbmluX2Zvcm0iPuW+ruS/oeiuouWNleWPtzwvbGFiZWw+CgkJCQkJCQkJCSAgICA8aW5wdXQgdHlwZT0icGFzc3dvcmQiIGNsYXNzPSJmb3JtLWNvbnRyb2wiIGlkPSJ0cmFkZV9pZCIgcGxhY2Vob2xkZXI9IuacgOWQjuS4gOasoeaIkOWKn+aUr+S7mOeahOW+ruS/oeiuouWNleWPtyI+CgkJCQkJCQkJCTwvZGl2PjwhLS0vLmZvcm0tZ3JvdXAgLS0+CgkJCQkJCQkJCTxkaXYgY2xhc3M9ImZvcm0tZ3JvdXAiPgoJCQkJCQkJCQkJPGxhYmVsIGZvcj0ic2lnbmluX2Zvcm0iPuaWsOWvhueggTwvbGFiZWw+CgkJCQkJCQkJCSAgICA8aW5wdXQgdHlwZT0icGFzc3dvcmQiIGNsYXNzPSJmb3JtLWNvbnRyb2wiIGlkPSJwYXNzd29yZCIgcGxhY2Vob2xkZXI9IumHjee9rueahOaWsOWvhueggSI+CgkJCQkJCQkJCTwvZGl2PjwhLS0vLmZvcm0tZ3JvdXAgLS0+CgkJCQkJCQkJPC9mb3JtPjwhLS0vZm9ybSAtLT4KCQkJCQkJCTwvZGl2PjwhLS0vLmNvbCAtLT4KCQkJCQkJPC9kaXY+PCEtLS8ucm93IC0tPgoKCQkJCQk8L2Rpdj48IS0tLy5zaWduaW4tZm9ybSAtLT4KCQkJCQk8ZGl2IGNsYXNzPSJzaWduaW4tcGFzc3dvcmQiPgoJCQkJCQk8ZGl2IGNsYXNzPSJwYXNzd29yZC1jaXJjbGUiPgoJCQkJCQkJPGRpdiBjbGFzcz0ic2luZ2xlLXBhc3N3b3JkLWNpcmNsZSI+CgkJCQkJCQkJPHAgaWQ9ImVycm9yLXNob3ciPjwvcD4KCQkJCQkJCTwvZGl2PjwhLS0vLnNpbmdsZS1wYXNzd29yZC1jaXJjbGUtLT4KCQkJCQkJPC9kaXY+PCEtLS8ucGFzc3dvcmQtY2lyY2xlLS0+CgkJCQkJPC9kaXY+PCEtLS8uc2lnbmluLXBhc3N3b3JkIC0tPgoKCQkJCQk8ZGl2IGNsYXNzPSJzaWduaW4tZm9vdGVyIj4KCQkJCQkJPGJ1dHRvbiB0eXBlPSJidXR0b24iIGNsYXNzPSJidG4gc2lnbmluX2J0biBzaWduaW5fYnRuX3R3byIgb25jbGljaz0iaW50ZXJuYWxDYWxsKDMwMzIpOyI+CgkJCQkJCemHjee9rgoJCQkJCQk8L2J1dHRvbj4KCQkJCQkJPHA+CgkJCQkJCQnov5Tlm57kuLvpobUKCQkJCQkJCTxhIGhyZWY9InNpZ25pbi5odG1sIj7orqTor4E8L2E+CgkJCQkJCTwvcD4KCQkJCQk8L2Rpdj48IS0tLy5zaWduaW4tZm9vdGVyIC0tPgoKCQkJCTwvZGl2PjwhLS0vLnNpZ24tY29udGVudCAtLT4KCQkJPC9kaXY+PCEtLS8uY29udGFpbmVyIC0tPgoKCQk8L3NlY3Rpb24+PCEtLS8uc2lnbmluIC0tPgoJCQoJCTwhLS0gc2lnbmluIGVuZCAtLT4KCgkJPCEtLWZvb3RlciBjb3B5cmlnaHQgc3RhcnQgLS0+CgkJPGZvb3RlciBjbGFzcz0iZm9vdGVyLWNvcHlyaWdodCI+CgkJCTxkaXYgaWQ9InNjcm9sbC1Ub3AiPgoJCQkJPGkgY2xhc3M9ImZhIGZhLWFuZ2xlLWRvdWJsZS11cCByZXR1cm4tdG8tdG9wIiBpZD0ic2Nyb2xsLXRvcCIgZGF0YS10b2dnbGU9InRvb2x0aXAiIGRhdGEtcGxhY2VtZW50PSJ0b3AiIHRpdGxlPSIiIGRhdGEtb3JpZ2luYWwtdGl0bGU9IkJhY2sgdG8gVG9wIiBhcmlhLWhpZGRlbj0idHJ1ZSI+PC9pPgoJCQk8L2Rpdj48IS0tLy5zY3JvbGwtVG9wLS0+CgoJCTwvZm9vdGVyPjwhLS0vLmhtLWZvb3Rlci1jb3B5cmlnaHQtLT4KCQk8IS0tZm9vdGVyIGNvcHlyaWdodCAgZW5kIC0tPgoKCgkJIDwhLS0gSW5jbHVkZSBhbGwganMgY29tcGlsZWQgcGx1Z2lucyAoYmVsb3cpLCBvciBpbmNsdWRlIGluZGl2aWR1YWwgZmlsZXMgYXMgbmVlZGVkIC0tPgoKCQk8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL2pxdWVyeS5qcyI+PC9zY3JpcHQ+CiAgICAgICAgCiAgICAgICAgPCEtLW1vZGVybml6ci5taW4uanMtLT4KICAgICAgICA8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL21vZGVybml6ci5taW4uanMiPjwvc2NyaXB0PgoJCQoJCTwhLS1ib290c3RyYXAubWluLmpzLS0+CiAgICAgICAgPHNjcmlwdCBzcmM9ImFzc2V0cy9qcy9ib290c3RyYXAubWluLmpzIj48L3NjcmlwdD4KCQkKCQk8IS0tIGJvb3RzbmF2IGpzIC0tPgoJCTxzY3JpcHQgc3JjPSJhc3NldHMvanMvYm9vdHNuYXYuanMiPjwvc2NyaXB0PgoJCQoJCTwhLS0ganF1ZXJ5LnN0aWNreS5qcyAtLT4KCQk8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL2pxdWVyeS5zdGlja3kuanMiPjwvc2NyaXB0PgoJCTxzY3JpcHQgc3JjPSJhc3NldHMvanMvanF1ZXJ5LmVhc2luZy5taW4uanMiPjwvc2NyaXB0PgoJCQogICAgICAgIAogICAgICAgIDwhLS1DdXN0b20gSlMtLT4KICAgICAgICA8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL2N1c3RvbS5qcyI+PC9zY3JpcHQ+CgogICAgPC9ib2R5PgoJCjwvaHRtbD4="

#define INTERNAL_PAGE_LOGIN	"data:text/html;base64,CjwhZG9jdHlwZSBodG1sPgo8aHRtbCAgbGFuZz0iZW4iPgoKICAgIDxoZWFkPgogICAgICAgIDwhLS0gbWV0YSBkYXRhIC0tPgogICAgICAgIDxtZXRhIGNoYXJzZXQ9InV0Zi04Ij4KICAgICAgICA8bWV0YSBodHRwLWVxdWl2PSJYLVVBLUNvbXBhdGlibGUiIGNvbnRlbnQ9IklFPWVkZ2UiPgogICAgICAgIDxtZXRhIG5hbWU9InZpZXdwb3J0IiBjb250ZW50PSJ3aWR0aD1kZXZpY2Utd2lkdGgsIGluaXRpYWwtc2NhbGU9MSI+CiAgICAgICAgPCEtLSBUaGUgYWJvdmUgMyBtZXRhIHRhZ3MgKm11c3QqIGNvbWUgZmlyc3QgaW4gdGhlIGhlYWQ7IGFueSBvdGhlciBoZWFkIGNvbnRlbnQgbXVzdCBjb21lICphZnRlciogdGhlc2UgdGFncyAtLT4KCiAgICAgICAgPCEtLWZvbnQtZmFtaWx5LS0+CgkJPGxpbmsgaHJlZj0iYXNzZXRzL2Nzcy9mb250LWZhbWlseS5jc3MiIHJlbD0ic3R5bGVzaGVldCI+CiAgICAgICAgCiAgICAgICAgPCEtLSB0aXRsZSBvZiBzaXRlIC0tPgogICAgICAgIDx0aXRsZT5FQ0VGIEF1dGhvcml6YXRpb248L3RpdGxlPgogICAgICAgCiAgICAgICAgPCEtLWZvbnQtYXdlc29tZS5taW4uY3NzLS0+CiAgICAgICAgPGxpbmsgcmVsPSJzdHlsZXNoZWV0IiBocmVmPSJhc3NldHMvY3NzL2ZvbnQtYXdlc29tZS5taW4uY3NzIj4KCQkKCQk8IS0tYW5pbWF0ZS5jc3MtLT4KICAgICAgICA8bGluayByZWw9InN0eWxlc2hlZXQiIGhyZWY9ImFzc2V0cy9jc3MvYW5pbWF0ZS5jc3MiPgoJCQogICAgICAgIDwhLS1ib290c3RyYXAubWluLmNzcy0tPgogICAgICAgIDxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9ib290c3RyYXAubWluLmNzcyI+CgkJCgkJPCEtLSBib290c25hdiAtLT4KCQk8bGluayByZWw9InN0eWxlc2hlZXQiIGhyZWY9ImFzc2V0cy9jc3MvYm9vdHNuYXYuY3NzIiA+CQogICAgICAgIAogICAgICAgIDwhLS1zdHlsZS5jc3MtLT4KICAgICAgICA8bGluayByZWw9InN0eWxlc2hlZXQiIGhyZWY9ImFzc2V0cy9jc3Mvc3R5bGUuY3NzIj4KICAgICAgICAKICAgICAgICA8IS0tcmVzcG9uc2l2ZS5jc3MtLT4KICAgICAgICA8bGluayByZWw9InN0eWxlc2hlZXQiIGhyZWY9ImFzc2V0cy9jc3MvcmVzcG9uc2l2ZS5jc3MiPgogICAgICAgIAogICAgICAgIDwhLS0gSFRNTDUgc2hpbSBhbmQgUmVzcG9uZC5qcyBmb3IgSUU4IHN1cHBvcnQgb2YgSFRNTDUgZWxlbWVudHMgYW5kIG1lZGlhIHF1ZXJpZXMgLS0+CiAgICAgICAgPCEtLSBXQVJOSU5HOiBSZXNwb25kLmpzIGRvZXNuJ3Qgd29yayBpZiB5b3UgdmlldyB0aGUgcGFnZSB2aWEgZmlsZTovLyAtLT4KCQkKICAgICAgICA8IS0tW2lmIGx0IElFIDldPgoJCQk8c2NyaXB0IHNyYz0iaHR0cHM6Ly9vc3MubWF4Y2RuLmNvbS9odG1sNXNoaXYvMy43LjMvaHRtbDVzaGl2Lm1pbi5qcyI+PC9zY3JpcHQ+CgkJCTxzY3JpcHQgc3JjPSJodHRwczovL29zcy5tYXhjZG4uY29tL3Jlc3BvbmQvMS40LjIvcmVzcG9uZC5taW4uanMiPjwvc2NyaXB0PgogICAgICAgIDwhW2VuZGlmXS0tPgoKICAgIDwvaGVhZD4KCQoJPGJvZHkgc3R5bGU9Im92ZXJmbG93OiBoaWRkZW47Ij4KCQk8IS0tW2lmIGx0ZSBJRSA5XT4KICAgICAgICAgICAgPHAgY2xhc3M9ImJyb3dzZXJ1cGdyYWRlIj5Zb3UgYXJlIHVzaW5nIGFuIDxzdHJvbmc+b3V0ZGF0ZWQ8L3N0cm9uZz4gYnJvd3Nlci4gUGxlYXNlIDxhIGhyZWY9Imh0dHBzOi8vYnJvd3NlaGFwcHkuY29tLyI+dXBncmFkZSB5b3VyIGJyb3dzZXI8L2E+IHRvIGltcHJvdmUgeW91ciBleHBlcmllbmNlIGFuZCBzZWN1cml0eS48L3A+CiAgICAgICAgPCFbZW5kaWZdLS0+CgkJCgkJPCEtLSBzaWduaW4gZW5kIC0tPgoJCTxzZWN0aW9uIGNsYXNzPSJzaWduaW4iPgoJCQk8ZGl2IGNsYXNzPSJjb250YWluZXIiPgoKCQkJCTxkaXYgY2xhc3M9InNpZ24tY29udGVudCI+CgoJCQkJCTxkaXYgY2xhc3M9InJvdyI+CgkJCQkJCTxkaXYgY2xhc3M9ImNvbC1zbS0xMiI+CgkJCQkJCQk8ZGl2IGNsYXNzPSJzaWduaW4tZm9ybSI+CgkJCQkJCQkJPGZvcm0gYWN0aW9uPSJzaWduaW4uaHRtbCI+CgkJCQkJCQkJCTxkaXYgY2xhc3M9ImZvcm0tZ3JvdXAiPgoJCQkJCQkJCQkgICAgPGxhYmVsIGZvcj0ic2lnbmluX2Zvcm0iPueUqOaIt+WQjTwvbGFiZWw+CgkJCQkJCQkJCSAgICA8aW5wdXQgdHlwZT0idGV4dCIgY2xhc3M9ImZvcm0tY29udHJvbCIgaWQ9InNpZ25pbl9mb3JtIiBwbGFjZWhvbGRlcj0i55So5oi35ZCNIj4KCQkJCQkJCQkJPC9kaXY+PCEtLS8uZm9ybS1ncm91cCAtLT4KCQkJCQkJCQkJPGRpdiBjbGFzcz0iZm9ybS1ncm91cCI+CgkJCQkJCQkJCQk8bGFiZWwgZm9yPSJzaWduaW5fZm9ybSI+5a+G56CBPC9sYWJlbD4KCQkJCQkJCQkJICAgIDxpbnB1dCB0eXBlPSJwYXNzd29yZCIgY2xhc3M9ImZvcm0tY29udHJvbCIgaWQ9InNpZ25pbl9mb3JtIiBwbGFjZWhvbGRlcj0i5a+G56CBIj4KCQkJCQkJCQkJPC9kaXY+PCEtLS8uZm9ybS1ncm91cCAtLT4KCQkJCQkJCQk8L2Zvcm0+PCEtLS9mb3JtIC0tPgoJCQkJCQkJPC9kaXY+PCEtLS8uc2lnbmluLWZvcm0gLS0+CgkJCQkJCTwvZGl2PjwhLS0vLmNvbCAtLT4KCQkJCQk8L2Rpdj48IS0tLy5yb3cgLS0+CgoJCQkJCTxkaXYgY2xhc3M9InJvdyI+CgkJCQkJCTxkaXYgY2xhc3M9ImNvbC1zbS0xMiI+CgkJCQkJCQk8ZGl2IGNsYXNzPSJzaWduaW4tcGFzc3dvcmQiPgoJCQkJCQkJCTxkaXYgY2xhc3M9InBhc3N3b3JkLWNpcmNsZSI+CgkJCQkJCQkJCTxkaXYgY2xhc3M9InNpbmdsZS1mb3Jnb3QtcGFzc3dvcmQtY2lyY2xlIHRleHQtcmlnaHQiPgoJCQkJCQkJCQkJPGEgaHJlZj0icmVzZXQuaHRtbCI+5b+Y5LqG5a+G56CBPC9hPgoJCQkJCQkJCQk8L2Rpdj48IS0tLy5zaW5nbGUtcGFzc3dvcmQtY2lyY2xlLS0+CgkJCQkJCQkJCTxkaXYgY2xhc3M9InNpbmdsZS1wYXNzd29yZC1jaXJjbGUiPgoJCQkJCQkJCQkJJm5ic3A7CgkJCQkJCQkJCQk8cCBpZD0iZXJyb3Itc2hvdyI+PC9wPgoJCQkJCQkJCQk8L2Rpdj48IS0tLy5zaW5nbGUtcGFzc3dvcmQtY2lyY2xlLS0+CgkJCQkJCQkJPC9kaXY+PCEtLS8ucGFzc3dvcmQtY2lyY2xlLS0+CgkJCQkJCQk8L2Rpdj48IS0tLy5zaWduaW4tcGFzc3dvcmQgLS0+CgkJCQkJCTwvZGl2PjwhLS0vLmNvbCAtLT4KCQkJCQk8L2Rpdj48IS0tLy5yb3cgLS0+CgoJCQkJCTxkaXYgY2xhc3M9InJvdyI+CgkJCQkJCTxkaXYgY2xhc3M9ImNvbC1zbS0xMiI+CgkJCQkJCQk8ZGl2IGNsYXNzPSJzaWduaW4tZm9vdGVyIj4KCQkJCQkJCQk8YnV0dG9uIHR5cGU9ImJ1dHRvbiIgY2xhc3M9ImJ0biBzaWduaW5fYnRuIHNpZ25pbl9idG5fdHdvIiBvbmNsaWNrPSJpbnRlcm5hbENhbGwoMzAzMCk7Ij4KCQkJCQkJCQnorqTor4EKCQkJCQkJCQk8L2J1dHRvbj4KCQkJCQkJCQk8cCA+CgkJCQkJCQkJCeiOt+WPluaOiOadg+i0puWPtz8KCQkJCQkJCQkJPGEgaHJlZj0ic2lnbnVwLmh0bWwiPuazqOWGjDwvYT4KCQkJCQkJCQk8L3A+CgkJCQkJCQk8L2Rpdj48IS0tLy5zaWduaW4tZm9vdGVyIC0tPgoJCQkJCQk8L2Rpdj48IS0tLy5jb2wgLS0+CgkJCQkJPC9kaXY+PCEtLS8ucm93IC0tPgoKCQkJCTwvZGl2PjwhLS0vLnNpZ24tY29udGVudCAtLT4KCQkJPC9kaXY+PCEtLS8uY29udGFpbmVyIC0tPgoKCQk8L3NlY3Rpb24+PCEtLS8uc2lnbmluIC0tPgoJCQoJCTwhLS0gc2lnbmluIGVuZCAtLT4KCgkJPCEtLWZvb3RlciBjb3B5cmlnaHQgc3RhcnQgLS0+CgkJPGZvb3RlciBjbGFzcz0iZm9vdGVyLWNvcHlyaWdodCI+CgkJCTxkaXYgaWQ9InNjcm9sbC1Ub3AiPgoJCQkJPGkgY2xhc3M9ImZhIGZhLWFuZ2xlLWRvdWJsZS11cCByZXR1cm4tdG8tdG9wIiBpZD0ic2Nyb2xsLXRvcCIgZGF0YS10b2dnbGU9InRvb2x0aXAiIGRhdGEtcGxhY2VtZW50PSJ0b3AiIHRpdGxlPSIiIGRhdGEtb3JpZ2luYWwtdGl0bGU9IkJhY2sgdG8gVG9wIiBhcmlhLWhpZGRlbj0idHJ1ZSI+PC9pPgoJCQk8L2Rpdj48IS0tLy5zY3JvbGwtVG9wLS0+CgoJCTwvZm9vdGVyPjwhLS0vLmhtLWZvb3Rlci1jb3B5cmlnaHQtLT4KCQk8IS0tZm9vdGVyIGNvcHlyaWdodCAgZW5kIC0tPgoKCgkJIDwhLS0gSW5jbHVkZSBhbGwganMgY29tcGlsZWQgcGx1Z2lucyAoYmVsb3cpLCBvciBpbmNsdWRlIGluZGl2aWR1YWwgZmlsZXMgYXMgbmVlZGVkIC0tPgoKCQk8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL2pxdWVyeS5qcyI+PC9zY3JpcHQ+CiAgICAgICAgCiAgICAgICAgPCEtLW1vZGVybml6ci5taW4uanMtLT4KICAgICAgICA8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL21vZGVybml6ci5taW4uanMiPjwvc2NyaXB0PgoJCQoJCTwhLS1ib290c3RyYXAubWluLmpzLS0+CiAgICAgICAgPHNjcmlwdCBzcmM9ImFzc2V0cy9qcy9ib290c3RyYXAubWluLmpzIj48L3NjcmlwdD4KCQkKCQk8IS0tIGJvb3RzbmF2IGpzIC0tPgoJCTxzY3JpcHQgc3JjPSJhc3NldHMvanMvYm9vdHNuYXYuanMiPjwvc2NyaXB0PgoJCQoJCTwhLS0ganF1ZXJ5LnN0aWNreS5qcyAtLT4KCQk8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL2pxdWVyeS5zdGlja3kuanMiPjwvc2NyaXB0PgoJCTxzY3JpcHQgc3JjPSJhc3NldHMvanMvanF1ZXJ5LmVhc2luZy5taW4uanMiPjwvc2NyaXB0PgoJCQogICAgICAgIAogICAgICAgIDwhLS1DdXN0b20gSlMtLT4KICAgICAgICA8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL2N1c3RvbS5qcyI+PC9zY3JpcHQ+CgogICAgPC9ib2R5PgoJCjwvaHRtbD4="

#define INTERNAL_PAGE_SIGNUP	"data:text/html;base64,CjwhZG9jdHlwZSBodG1sPgo8aHRtbD4KICAgIDxoZWFkPgogICAgICAgIDwhLS0gbWV0YSBkYXRhIC0tPgogICAgICAgIDxtZXRhIGNoYXJzZXQ9InV0Zi04Ij4KICAgICAgICA8bWV0YSBodHRwLWVxdWl2PSJYLVVBLUNvbXBhdGlibGUiIGNvbnRlbnQ9IklFPWVkZ2UiPgogICAgICAgIDxtZXRhIG5hbWU9InZpZXdwb3J0IiBjb250ZW50PSJ3aWR0aD1kZXZpY2Utd2lkdGgsIGluaXRpYWwtc2NhbGU9MSI+CiAgICAgICAgPCEtLSBUaGUgYWJvdmUgMyBtZXRhIHRhZ3MgKm11c3QqIGNvbWUgZmlyc3QgaW4gdGhlIGhlYWQ7IGFueSBvdGhlciBoZWFkIGNvbnRlbnQgbXVzdCBjb21lICphZnRlciogdGhlc2UgdGFncyAtLT4KCiAgICAgICAgPCEtLWZvbnQtZmFtaWx5LS0+CgkJPGxpbmsgaHJlZj0iYXNzZXRzL2Nzcy9mb250LWZhbWlseS5jc3MiIHJlbD0ic3R5bGVzaGVldCI+CiAgICAgICAgCiAgICAgICAgPCEtLSB0aXRsZSBvZiBzaXRlIC0tPgogICAgICAgIDx0aXRsZT5FQ0VGIEF1dGhvcml6YXRpb248L3RpdGxlPgoKICAgICAgICA8IS0tIEZvciBmYXZpY29uIHBuZyAtLT4KCQk8bGluayByZWw9InNob3J0Y3V0IGljb24iIHR5cGU9ImltYWdlL2ljb24iIGhyZWY9ImFzc2V0cy9sb2dvL2Zhdmljb24ucG5nIi8+CiAgICAgICAKICAgICAgICA8IS0tZm9udC1hd2Vzb21lLm1pbi5jc3MtLT4KICAgICAgICA8bGluayByZWw9InN0eWxlc2hlZXQiIGhyZWY9ImFzc2V0cy9jc3MvZm9udC1hd2Vzb21lLm1pbi5jc3MiPgoJCQoJCTwhLS1hbmltYXRlLmNzcy0tPgogICAgICAgIDxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9hbmltYXRlLmNzcyI+CgkJCiAgICAgICAgPCEtLWJvb3RzdHJhcC5taW4uY3NzLS0+CiAgICAgICAgPGxpbmsgcmVsPSJzdHlsZXNoZWV0IiBocmVmPSJhc3NldHMvY3NzL2Jvb3RzdHJhcC5taW4uY3NzIj4KCQkKCQk8IS0tIGJvb3RzbmF2IC0tPgoJCTxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9ib290c25hdi5jc3MiID4JCiAgICAgICAgCiAgICAgICAgPCEtLXN0eWxlLmNzcy0tPgogICAgICAgIDxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9zdHlsZS5jc3MiPgogICAgICAgIAogICAgICAgIDwhLS1yZXNwb25zaXZlLmNzcy0tPgogICAgICAgIDxsaW5rIHJlbD0ic3R5bGVzaGVldCIgaHJlZj0iYXNzZXRzL2Nzcy9yZXNwb25zaXZlLmNzcyI+CiAgICAgICAgCiAgICAgICAgPCEtLSBIVE1MNSBzaGltIGFuZCBSZXNwb25kLmpzIGZvciBJRTggc3VwcG9ydCBvZiBIVE1MNSBlbGVtZW50cyBhbmQgbWVkaWEgcXVlcmllcyAtLT4KICAgICAgICA8IS0tIFdBUk5JTkc6IFJlc3BvbmQuanMgZG9lc24ndCB3b3JrIGlmIHlvdSB2aWV3IHRoZSBwYWdlIHZpYSBmaWxlOi8vIC0tPgoJCQogICAgICAgIDwhLS1baWYgbHQgSUUgOV0+CgkJCTxzY3JpcHQgc3JjPSJodHRwczovL29zcy5tYXhjZG4uY29tL2h0bWw1c2hpdi8zLjcuMy9odG1sNXNoaXYubWluLmpzIj48L3NjcmlwdD4KCQkJPHNjcmlwdCBzcmM9Imh0dHBzOi8vb3NzLm1heGNkbi5jb20vcmVzcG9uZC8xLjQuMi9yZXNwb25kLm1pbi5qcyI+PC9zY3JpcHQ+CiAgICAgICAgPCFbZW5kaWZdLS0+CgogICAgPC9oZWFkPgoJCgk8Ym9keSBzdHlsZT0ib3ZlcmZsb3c6IGhpZGRlbjsiPgoJCTwhLS1baWYgbHRlIElFIDldPgogICAgICAgICAgICA8cCBjbGFzcz0iYnJvd3NlcnVwZ3JhZGUiPllvdSBhcmUgdXNpbmcgYW4gPHN0cm9uZz5vdXRkYXRlZDwvc3Ryb25nPiBicm93c2VyLiBQbGVhc2UgPGEgaHJlZj0iaHR0cHM6Ly9icm93c2VoYXBweS5jb20vIj51cGdyYWRlIHlvdXIgYnJvd3NlcjwvYT4gdG8gaW1wcm92ZSB5b3VyIGV4cGVyaWVuY2UgYW5kIHNlY3VyaXR5LjwvcD4KICAgICAgICA8IVtlbmRpZl0tLT4KCQkKCQk8IS0tIHNpZ25pbiBlbmQgLS0+CgkJPHNlY3Rpb24gY2xhc3M9InNpZ25pbiBzaWdudXAiPgoJCQk8ZGl2IGNsYXNzPSJjb250YWluZXIiPgoKCQkJCTxkaXYgY2xhc3M9InNpZ24tY29udGVudCI+CgkJCQkJPGRpdiBjbGFzcz0ic2lnbmluLWZvcm0iPgoJCQkJCQk8ZGl2IGNsYXNzPSIgIj4KCQkJCQkJCTxkaXYgY2xhc3M9IiAiPgoJCQkJCQkJCTxmb3JtIGFjdGlvbj0ic2lnbmluLmh0bWwiPgoJCQkJCQkJCQk8ZGl2IGNsYXNzPSJmb3JtLWdyb3VwIj4KCQkJCQkJCQkJICAgIDxsYWJlbCBmb3I9InNpZ25pbl9mb3JtIj7ms6jlhoznlKjmiLflkI08L2xhYmVsPgoJCQkJCQkJCQkgICAgPGlucHV0IHR5cGU9InRleHQiIGNsYXNzPSJmb3JtLWNvbnRyb2wiIGlkPSJ1c2VybmFtZSIgcGxhY2Vob2xkZXI9IuazqOWGjOeUqOaIt+WQjSI+CgkJCQkJCQkJCTwvZGl2PjwhLS0vLmZvcm0tZ3JvdXAgLS0+CgkJCQkJCQkJCTxkaXYgY2xhc3M9ImZvcm0tZ3JvdXAiPgoJCQkJCQkJCQkJPGxhYmVsIGZvcj0ic2lnbmluX2Zvcm0iPuazqOWGjOWvhueggTwvbGFiZWw+CgkJCQkJCQkJCSAgICA8aW5wdXQgdHlwZT0icGFzc3dvcmQiIGNsYXNzPSJmb3JtLWNvbnRyb2wiIGlkPSJwYXNzd29yZCIgcGxhY2Vob2xkZXI9IuazqOWGjOWvhueggSI+CgkJCQkJCQkJCTwvZGl2PjwhLS0vLmZvcm0tZ3JvdXAgLS0+CgkJCQkJCQkJCTxkaXYgY2xhc3M9ImZvcm0tZ3JvdXAiPgoJCQkJCQkJCQkJPGxhYmVsIGZvcj0ic2lnbmluX2Zvcm0iPumHjeWkjeehruiupDwvbGFiZWw+CgkJCQkJCQkJCSAgICA8aW5wdXQgdHlwZT0icGFzc3dvcmQiIGNsYXNzPSJmb3JtLWNvbnRyb2wiIGlkPSJyZXBhdHB3ZCIgcGxhY2Vob2xkZXI9IumHjeWkjeehruiupOWvhueggSI+CgkJCQkJCQkJCTwvZGl2PjwhLS0vLmZvcm0tZ3JvdXAgLS0+CgkJCQkJCQkJPC9mb3JtPjwhLS0vZm9ybSAtLT4KCQkJCQkJCTwvZGl2PjwhLS0vLmNvbCAtLT4KCQkJCQkJPC9kaXY+PCEtLS8ucm93IC0tPgoKCQkJCQk8L2Rpdj48IS0tLy5zaWduaW4tZm9ybSAtLT4KCQkJCQk8ZGl2IGNsYXNzPSJzaWduaW4tcGFzc3dvcmQiPgoJCQkJCQk8ZGl2IGNsYXNzPSJwYXNzd29yZC1jaXJjbGUiPgoJCQkJCQkJPGRpdiBjbGFzcz0ic2luZ2xlLXBhc3N3b3JkLWNpcmNsZSI+CgkJCQkJCQkJPHAgaWQ9ImVycm9yLXNob3ciPjwvcD4KCQkJCQkJCTwvZGl2PjwhLS0vLnNpbmdsZS1wYXNzd29yZC1jaXJjbGUtLT4KCQkJCQkJPC9kaXY+PCEtLS8ucGFzc3dvcmQtY2lyY2xlLS0+CgkJCQkJPC9kaXY+PCEtLS8uc2lnbmluLXBhc3N3b3JkIC0tPgoKCQkJCQk8ZGl2IGNsYXNzPSJzaWduaW4tZm9vdGVyIj4KCQkJCQkJPGJ1dHRvbiB0eXBlPSJidXR0b24iIGNsYXNzPSJidG4gc2lnbmluX2J0biBzaWduaW5fYnRuX3R3byIgb25jbGljaz0iaW50ZXJuYWxDYWxsKDMwMzEpOyI+CgkJCQkJCeazqOWGjAoJCQkJCQk8L2J1dHRvbj4KCQkJCQkJPHA+CgkJCQkJCQnlt7LmnInotKblj7cgPwoJCQkJCQkJPGEgaHJlZj0ic2lnbmluLmh0bWwiPuiupOivgTwvYT4KCQkJCQkJPC9wPgoJCQkJCTwvZGl2PjwhLS0vLnNpZ25pbi1mb290ZXIgLS0+CgoJCQkJPC9kaXY+PCEtLS8uc2lnbi1jb250ZW50IC0tPgoJCQk8L2Rpdj48IS0tLy5jb250YWluZXIgLS0+CgoJCTwvc2VjdGlvbj48IS0tLy5zaWduaW4gLS0+CgkJCgkJPCEtLSBzaWduaW4gZW5kIC0tPgoKCQk8IS0tZm9vdGVyIGNvcHlyaWdodCBzdGFydCAtLT4KCQk8Zm9vdGVyIGNsYXNzPSJmb290ZXItY29weXJpZ2h0Ij4KCQkJPGRpdiBpZD0ic2Nyb2xsLVRvcCI+CgkJCQk8aSBjbGFzcz0iZmEgZmEtYW5nbGUtZG91YmxlLXVwIHJldHVybi10by10b3AiIGlkPSJzY3JvbGwtdG9wIiBkYXRhLXRvZ2dsZT0idG9vbHRpcCIgZGF0YS1wbGFjZW1lbnQ9InRvcCIgdGl0bGU9IiIgZGF0YS1vcmlnaW5hbC10aXRsZT0iQmFjayB0byBUb3AiIGFyaWEtaGlkZGVuPSJ0cnVlIj48L2k+CgkJCTwvZGl2PjwhLS0vLnNjcm9sbC1Ub3AtLT4KCgkJPC9mb290ZXI+PCEtLS8uaG0tZm9vdGVyLWNvcHlyaWdodC0tPgoJCTwhLS1mb290ZXIgY29weXJpZ2h0ICBlbmQgLS0+CgoKCQkgPCEtLSBJbmNsdWRlIGFsbCBqcyBjb21waWxlZCBwbHVnaW5zIChiZWxvdyksIG9yIGluY2x1ZGUgaW5kaXZpZHVhbCBmaWxlcyBhcyBuZWVkZWQgLS0+CgoJCTxzY3JpcHQgc3JjPSJhc3NldHMvanMvanF1ZXJ5LmpzIj48L3NjcmlwdD4KICAgICAgICAKICAgICAgICA8IS0tbW9kZXJuaXpyLm1pbi5qcy0tPgogICAgICAgIDxzY3JpcHQgc3JjPSJhc3NldHMvanMvbW9kZXJuaXpyLm1pbi5qcyI+PC9zY3JpcHQ+CgkJCgkJPCEtLWJvb3RzdHJhcC5taW4uanMtLT4KICAgICAgICA8c2NyaXB0IHNyYz0iYXNzZXRzL2pzL2Jvb3RzdHJhcC5taW4uanMiPjwvc2NyaXB0PgoJCQoJCTwhLS0gYm9vdHNuYXYganMgLS0+CgkJPHNjcmlwdCBzcmM9ImFzc2V0cy9qcy9ib290c25hdi5qcyI+PC9zY3JpcHQ+CgkJCgkJPCEtLSBqcXVlcnkuc3RpY2t5LmpzIC0tPgoJCTxzY3JpcHQgc3JjPSJhc3NldHMvanMvanF1ZXJ5LnN0aWNreS5qcyI+PC9zY3JpcHQ+CgkJPHNjcmlwdCBzcmM9ImFzc2V0cy9qcy9qcXVlcnkuZWFzaW5nLm1pbi5qcyI+PC9zY3JpcHQ+CgkJCiAgICAgICAgCiAgICAgICAgPCEtLUN1c3RvbSBKUy0tPgogICAgICAgIDxzY3JpcHQgc3JjPSJhc3NldHMvanMvY3VzdG9tLmpzIj48L3NjcmlwdD4KCiAgICA8L2JvZHk+CgkKPC9odG1sPg=="